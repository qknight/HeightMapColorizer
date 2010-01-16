//
// C++ Implementation: gradient
//
// Description:
//
//
// Author: Joachim Schiele <js@lastlog.de>, (C) 2007
//
// Copyright: See COPYING file that comes with this distribution
//
//

#include "gradient.h"
gradient::~gradient(){
  for (int i=0; i < gV.size(); ++i) {
    delete gV[i];
  }
}
gradient::gradient(){
//   grad = new QVector<gradient_element>;
//    qDebug("%i", grad);
//   n=5;
}

gradient_element* gradient::operator[] (int i)  const
{
  return gV[i];
}

bool gradient::addElement(double pos,int r,int g,int b){
  gradient_element* e = new gradient_element;
  e->position = pos;
  e->color = QColor(r,g,b);
  gV.push_back(e);
//   qDebug("addElement[%i] %f %i %i %i called", gV.size(), pos, r, g, b);
}

bool gradient::clear() {
  gV.clear();
}

int gradient::size() {
  return gV.size();
}

void gradient::export_gradient() {

}
