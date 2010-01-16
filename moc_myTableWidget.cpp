/****************************************************************************
** Meta object code from reading C++ file 'myTableWidget.h'
**
** Created: Sat Jan 16 19:16:46 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "myTableWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myTableWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_myTableWidget[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      30,   14,   14,   14, 0x08,
      39,   14,   14,   14, 0x08,
      56,   48,   14,   14, 0x08,
      87,   82,   14,   14, 0x08,
     118,   14,   14,   14, 0x08,
     125,   14,   14,   14, 0x08,
     132,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_myTableWidget[] = {
    "myTableWidget\0\0drawGradient()\0addRow()\0"
    "delRow()\0p,r,g,b\0addRow(float,int,int,int)\0"
    "item\0itemchanged(QTableWidgetItem*)\0"
    "save()\0load()\0print_gradient()\0"
};

const QMetaObject myTableWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_myTableWidget,
      qt_meta_data_myTableWidget, 0 }
};

const QMetaObject *myTableWidget::metaObject() const
{
    return &staticMetaObject;
}

void *myTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_myTableWidget))
        return static_cast<void*>(const_cast< myTableWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int myTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: drawGradient(); break;
        case 1: addRow(); break;
        case 2: delRow(); break;
        case 3: addRow((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: itemchanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 5: save(); break;
        case 6: load(); break;
        case 7: print_gradient(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
