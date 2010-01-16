// #include <QApplication>
#include "myTableWidget.h"

int main(int argc, char* argv[]) {
  QApplication app(argc,argv);

  myTableWidget* z = new myTableWidget;
  z->show();

  int r = app.exec();
  z->print_gradient();
  return r;
}
