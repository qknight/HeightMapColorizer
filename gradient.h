//
// C++ Interface: gradient
//
// Description:
//
//
// Author: Joachim Schiele <js@lastlog.de>, (C) 2007
//
// Copyright: See COPYING file that comes with this distribution
//
//

#ifndef __GRADIENT__HH__
#define __GRADIENT__HH__

#include <QVector>
#include <QColor>

class gradient_element {
  public:
  QColor color;
  double position;
};

class gradient {
  private:
    QVector<gradient_element*> gV;

  public:
    gradient();
    ~gradient();

    gradient_element* operator[] (int i)  const;

    int size();

    bool clear();
    bool addElement(double,int,int,int);
    void export_gradient();
};

#endif
