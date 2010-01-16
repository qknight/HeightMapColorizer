#include "myTableWidget.h"

myTableWidget::myTableWidget(QDialog* parent) : QDialog(parent) {
  imagename = "height.bmp";
  setupUi(this);
  table->clear();
  table->setRowCount(0);
  table->setColumnCount(4);
  table->setHorizontalHeaderLabels(QStringList() << tr("position") << tr("RED")<< tr("GREEN")<< tr("BLUE"));

  connect(table, SIGNAL(itemChanged (QTableWidgetItem *)),
        this, SLOT(itemchanged(QTableWidgetItem *)));

  connect(pushButton, SIGNAL(clicked()),
        this, SLOT(addRow()));
  connect(delBtn, SIGNAL(clicked()),
        this, SLOT(delRow()));
  connect(printBtn, SIGNAL(clicked()),
        this, SLOT(print_gradient()));
  connect(loadBtn, SIGNAL(clicked()),
        this, SLOT(load()));
  connect(saveBtn, SIGNAL(clicked()),
        this, SLOT(save()));

  QColor red=QColor(Qt::red);
  QColor green=QColor(Qt::green);
  QColor blue=QColor(Qt::blue);
  addRow( 0.0,red.red(),red.green(),red.blue());
  addRow( 0.5,green.red(),green.green(),green.blue());
  addRow( 1.0,blue.red(),blue.green(),blue.blue());

  // BUG: Did not work with pointer, or pointer combination
  //      from the gradient class definition.
  //      Problem could also be the name grad in the class
  //      gradient which stores gradient_elements
  gradient gr;// = new gradient;

  QImage img(imagename);

  viewOld->setPixmap(QPixmap::fromImage(img,Qt::AutoColor));

  drawGradient();
  createGradientPalette();
  drawColoredMap();
}

void myTableWidget::drawColoredMap() {
  QImage img2(imagename);

  QImage img3 = img2.convertToFormat(QImage::Format_RGB32,Qt::ColorOnly);
  QRgb value1, value2;

  for(int x=0; x < img3.width(); ++x) {
    for(int y=0; y < img3.height(); ++y) {
      value1 = qGray(img3.pixel(x,y));
      value2=palette[value1];
      img3.setPixel(x,y,value2);
    }
  }

  viewNew->setPixmap(QPixmap::fromImage(img3,Qt::AutoColor));
}

void myTableWidget::createGradientPalette() {
  int width=256;
  int height=1;

  QPixmap palette_pixmap(width, height);

  QLinearGradient g(QPointF(0, 0), QPointF(width, 0));

   for (int i=0; i < gr.size(); ++i) {
      g.setColorAt(gr[i]->position, gr[i]->color);
   }

  QBrush b(g);
  QPainter z;

  z.begin(&palette_pixmap);
  z.fillRect(0, 0, width, height, b);
  z.end();
  QImage qi = palette_pixmap.toImage();
  palette.clear();
  for(int i=0; i < 256; ++i) {
    palette.push_back( qi.pixel(i,0));
  }
}

void myTableWidget::drawGradient() {
  int width=viewGradient->width();
  int height=viewGradient->height();

  out = QPixmap(width, height);

  QLinearGradient g(QPointF(0, 0), QPointF(width, 0));

  for (int i=0; i < gr.size(); ++i) {
     g.setColorAt(gr[i]->position, gr[i]->color);
  }

  QBrush b(g);

  QPainter zmpaint;
  zmpaint.begin(&out);
  zmpaint.fillRect(0, 0, width, height, b);
  zmpaint.end();
  viewGradient->setPixmap(out);
  viewGradient->setMinimumWidth(1);
}

void myTableWidget::delRow(){
  if (table->currentRow() == -1)
    QMessageBox::information(this, tr("Selection needed"), tr("You need to select at least one element in a row of the table to delete a row from your table!"));
  else {
    table->removeRow(table->currentRow());
    ;
  }
  updateTableItems();
}

void myTableWidget::addRow(float p, int r, int g, int b) {
  table->setSortingEnabled(false);
  int row = table->rowCount();
  table->insertRow(row);
  for (int i=0; i < 4; ++i)  {
    if (i==0) {
      QTableWidgetItem *newItem = new QTableWidgetItem(tr("%1").arg(p));
      table->setCurrentItem(newItem);
      table->setItem(row, i, newItem);
    } else {
      int value=0;
      switch (i) {
      case 1:
        value=r;
        break;
      case 2:
        value=g;
        break;
      case 3:
        value=b;
        break;
      }
      QTableWidgetItem *newItem = new QTableWidgetItem(tr("%1").arg(value));
      table->setItem(row, i, newItem);
    }
  }
  table->setSortingEnabled(true);
}

void myTableWidget::addRow() {
  addRow(1.0,0,255,0);
}

void myTableWidget::itemchanged(QTableWidgetItem * item) {
  updateTableItems();
}

void myTableWidget::updateTableItems() {
  gr.clear();
  for (int i=0; i < table->rowCount(); ++i) {
    double pos = table->item(i,0)->text().toDouble();
    if (table->item(i,3) != 0) {
      int r = table->item(i,1)->text().toInt();
      int g = table->item(i,2)->text().toInt();
      int b = table->item(i,3)->text().toInt();
      gr.addElement(pos,r,g,b);
    }
  }
  drawGradient();
  createGradientPalette();
  drawColoredMap();
}

void myTableWidget::resizeEvent(QResizeEvent * event){
  viewGradient->resize(table->width(), 50);
  drawGradient();
}

void myTableWidget::print_gradient(){
  for(int i=0; i < gr.size(); ++i) {
    double pos = gr[i]->position;
    QColor color = gr[i]->color;
    qDebug("renderer.AddGradientPoint ( %f, utils::Color (%i, %i, %i, 255));", pos, color.red(), color.green(), color.blue());
  }
}

