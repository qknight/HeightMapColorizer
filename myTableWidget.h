#ifndef __MYTABLEWIDGET__HH__
#define __MYTABLEWIDGET__HH__

#include <QMainWindow>
#include <QDialog>
#include <QMainWindow>
#include <QPainter>
#include <QMessageBox>
#include <QDomDocument>
#include <QFile>
#include <QTextStream>
#include "ui_tableWidget.h"
#include "gradient.h"

class myTableWidget : public QDialog, private Ui::tableWidget {
  Q_OBJECT

  private:
    gradient gr;
    QPixmap out;
    QVector<QRgb> palette;
    QString imagename;

    void drawColoredMap();
    void createGradientPalette();
    void parseGradientPointElement(const QDomElement &el);
    void updateTableItems();
  public:
    myTableWidget(QDialog* parent=0);

  protected:
     void resizeEvent(QResizeEvent * event);

  private slots:
    void drawGradient();
    void addRow();
    void delRow();
    void addRow(float p, int r, int g, int b);
    void itemchanged(QTableWidgetItem * item);
    void save();
    void load();

  public slots:
    void print_gradient();
};

#endif
