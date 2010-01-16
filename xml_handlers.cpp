//
// C++ Implementation: xml_handlers
//
// Description:
//
//
// Author: Joachim Schiele <js@lastlog.de>, (C) 2007
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "myTableWidget.h"

void myTableWidget::save(){
  QDomDocument doc("GradientDescriptionDB");
  QDomElement root = doc.createElement("GradientDescriptionDB");
  doc.appendChild(root);

  QDomElement gd = doc.createElement("Gradient");
  root.appendChild(gd);

  for (int i=0; i < table->rowCount(); ++i) {
    double pos = table->item(i,0)->text().toDouble();
    if (table->item(i,3) != 0) {
      int r = table->item(i,1)->text().toInt();
      int g = table->item(i,2)->text().toInt();
      int b = table->item(i,3)->text().toInt();
      QString p = QString("%1").arg(pos);
      QString p1 = QString("%1").arg(r);
      QString p2 = QString("%1").arg(g);
      QString p3 = QString("%1").arg(b);

      QDomElement el = doc.createElement("GradientPoint");
      gd.appendChild(el);

      QDomElement pos_ = doc.createElement("position");
      el.appendChild(pos_);
      pos_.setAttribute(QString("value"),p);

      QDomElement colorR_ = doc.createElement("red");
      el.appendChild(colorR_);
      colorR_.setAttribute(QString("value"),p1);

      QDomElement colorG_ = doc.createElement("green");
      el.appendChild(colorG_);
      colorG_.setAttribute(QString("value"),p2);

      QDomElement colorB_ = doc.createElement("blue");
      el.appendChild(colorB_);
      colorB_.setAttribute(QString("value"),p3);
    }
  }

  QString fileName="GradientDescriptionDB.xml";

  QFile file(fileName);
  if (!file.open(QFile::WriteOnly | QFile::Text)) {
      QMessageBox::warning(this, tr("File writing error"),
                            tr("Cannot write file %1:\n%2.")
                            .arg(fileName)
                            .arg(file.errorString()));
      return;
  }
  QTextStream out(&file);
  doc.save(out, 4);
}

void myTableWidget::load(){
  disconnect(table, SIGNAL(itemChanged (QTableWidgetItem *)),
        this, SLOT(itemchanged(QTableWidgetItem *)));

  table->clearContents();
  table->setRowCount(0);

  QString fileName="GradientDescriptionDB.xml";
  QDomDocument domDocument;

  QFile file(fileName);
  if (!file.open(QFile::ReadOnly | QFile::Text)) {
      QMessageBox::warning(this, tr("File writing error"),
                            tr("Cannot write file %1:\n%2.")
                            .arg(fileName)
                            .arg(file.errorString()));
      return;
  }

    QString errorStr;
    int errorLine;
    int errorColumn;

    if (!domDocument.setContent(&file, true, &errorStr, &errorLine,
                                &errorColumn)) {
        QMessageBox::information(window(), tr("DOM Bookmarks"),
                                 tr("Parse error at line %1, column %2:\n%3")
                                 .arg(errorLine)
                                 .arg(errorColumn)
                                 .arg(errorStr));
        return ;
    }

    QDomElement root = domDocument.documentElement();
    if (root.tagName() != "GradientDescriptionDB") {
        QMessageBox::information(window(), tr("DOM Bookmarks"),
                                 tr("The file is not an XBEL file."));
        return ;
    } else if (root.hasAttribute("version")
               && root.attribute("version") != "1.0") {
        QMessageBox::information(window(), tr("DOM Bookmarks"),
                                 tr("The file is not an XBEL version 1.0 "
                                    "file."));
        return ;
    }


  QDomElement child_ = root.firstChildElement("Gradient");
  QDomElement child = child_.firstChildElement("GradientPoint");
  qDebug("TODO: only loading the first GradientPoint found");

  while (!child.isNull()) {
      parseGradientPointElement(child);
      child = child.nextSiblingElement("GradientPoint");
  }
  updateTableItems();

  connect(table, SIGNAL(itemChanged (QTableWidgetItem *)),
        this, SLOT(itemchanged(QTableWidgetItem *)));
}

void myTableWidget::parseGradientPointElement(const QDomElement &el) {
  double position=0.0;
  int r=0, g=0, b=0;

  QDomElement element = el.firstChildElement();

  while (!element.isNull()) {
    if (element.tagName() == "position") {
// TODO
//       if (element.hasAttribute("value"))
//         qDebug("yes it has the attribute");
      QString p = QString(element.attribute("value"));
      position = p.toDouble();
    }

    if (element.tagName() == "red") {
//       if (element.hasAttribute("value"))
//         qDebug("yes it has the attribute");
      QString p = QString(element.attribute("value"));
      r = p.toInt();
    }
    if (element.tagName() == "green") {
//       if (element.hasAttribute("value"))
//         qDebug("yes it has the attribute");
      QString p = QString(element.attribute("value"));
      g = p.toInt();
    }
    if (element.tagName() == "blue") {
//       if (element.hasAttribute("value"))
//         qDebug("yes it has the attribute");
      QString p = QString(element.attribute("value"));
      b = p.toInt();
    }
    element = element.nextSiblingElement();
  }
  addRow(position,r,g,b);

}
