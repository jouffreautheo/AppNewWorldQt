/****************************************************************************
** Meta object code from reading C++ file 'dialograyon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AppNewWorld/dialograyon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialograyon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogRayon_t {
    QByteArrayData data[6];
    char stringdata[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogRayon_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogRayon_t qt_meta_stringdata_DialogRayon = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 27),
QT_MOC_LITERAL(2, 40, 0),
QT_MOC_LITERAL(3, 41, 28),
QT_MOC_LITERAL(4, 70, 26),
QT_MOC_LITERAL(5, 97, 4)
    },
    "DialogRayon\0on_pushButtonRetour_clicked\0"
    "\0on_pushButtonAjouter_clicked\0"
    "on_lineEditNom_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogRayon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void DialogRayon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogRayon *_t = static_cast<DialogRayon *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonRetour_clicked(); break;
        case 1: _t->on_pushButtonAjouter_clicked(); break;
        case 2: _t->on_lineEditNom_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DialogRayon::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogRayon.data,
      qt_meta_data_DialogRayon,  qt_static_metacall, 0, 0}
};


const QMetaObject *DialogRayon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogRayon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogRayon.stringdata))
        return static_cast<void*>(const_cast< DialogRayon*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogRayon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
