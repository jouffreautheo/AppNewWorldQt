/****************************************************************************
** Meta object code from reading C++ file 'dialogtypeprod.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AppNewWorld/dialogtypeprod.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogtypeprod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogTypeProd_t {
    QByteArrayData data[7];
    char stringdata[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogTypeProd_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogTypeProd_t qt_meta_stringdata_DialogTypeProd = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 27),
QT_MOC_LITERAL(2, 43, 0),
QT_MOC_LITERAL(3, 44, 28),
QT_MOC_LITERAL(4, 73, 21),
QT_MOC_LITERAL(5, 95, 25),
QT_MOC_LITERAL(6, 121, 4)
    },
    "DialogTypeProd\0on_pushButtonCancel_clicked\0"
    "\0on_pushButtonAjouter_clicked\0"
    "on_pushButton_clicked\0on_lineEditNom_textEdited\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogTypeProd[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void DialogTypeProd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogTypeProd *_t = static_cast<DialogTypeProd *>(_o);
        switch (_id) {
        case 0: _t->on_pushButtonCancel_clicked(); break;
        case 1: _t->on_pushButtonAjouter_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_lineEditNom_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DialogTypeProd::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogTypeProd.data,
      qt_meta_data_DialogTypeProd,  qt_static_metacall, 0, 0}
};


const QMetaObject *DialogTypeProd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogTypeProd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogTypeProd.stringdata))
        return static_cast<void*>(const_cast< DialogTypeProd*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogTypeProd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
