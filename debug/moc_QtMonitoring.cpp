/****************************************************************************
** Meta object code from reading C++ file 'QtMonitoring.h'
**
** Created: Sun 29. May 21:02:19 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtMonitoring.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtMonitoring.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtMonitoring[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      32,   13,   13,   13, 0x08,
      49,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QtMonitoring[] = {
    "QtMonitoring\0\0startMonitoring()\0"
    "stopMonitoring()\0handleTimeExpired()\0"
};

const QMetaObject QtMonitoring::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtMonitoring,
      qt_meta_data_QtMonitoring, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtMonitoring::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtMonitoring::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtMonitoring::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtMonitoring))
        return static_cast<void*>(const_cast< QtMonitoring*>(this));
    return QWidget::qt_metacast(_clname);
}

int QtMonitoring::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startMonitoring(); break;
        case 1: stopMonitoring(); break;
        case 2: handleTimeExpired(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
