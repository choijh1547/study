/****************************************************************************
** Meta object code from reading C++ file 'test.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "test.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Test_t {
    QByteArrayData data[18];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Test_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Test_t qt_meta_stringdata_Test = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Test"
QT_MOC_LITERAL(1, 5, 4), // "init"
QT_MOC_LITERAL(2, 10, 0), // ""
QT_MOC_LITERAL(3, 11, 10), // "clickCount"
QT_MOC_LITERAL(4, 22, 3), // "str"
QT_MOC_LITERAL(5, 26, 8), // "printAll"
QT_MOC_LITERAL(6, 35, 7), // "addItem"
QT_MOC_LITERAL(7, 43, 6), // "btnNum"
QT_MOC_LITERAL(8, 50, 8), // "rowCount"
QT_MOC_LITERAL(9, 59, 6), // "parent"
QT_MOC_LITERAL(10, 66, 7), // "getData"
QT_MOC_LITERAL(11, 74, 10), // "removeItem"
QT_MOC_LITERAL(12, 85, 11), // "removeCount"
QT_MOC_LITERAL(13, 97, 9), // "btn1Count"
QT_MOC_LITERAL(14, 107, 9), // "btn2Count"
QT_MOC_LITERAL(15, 117, 13), // "currentStatus"
QT_MOC_LITERAL(16, 131, 13), // "changedStatus"
QT_MOC_LITERAL(17, 145, 6) // "status"

    },
    "Test\0init\0\0clickCount\0str\0printAll\0"
    "addItem\0btnNum\0rowCount\0parent\0getData\0"
    "removeItem\0removeCount\0btn1Count\0"
    "btn2Count\0currentStatus\0changedStatus\0"
    "status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Test[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x02 /* Public */,
       3,    1,   80,    2, 0x02 /* Public */,
       5,    0,   83,    2, 0x02 /* Public */,
       6,    1,   84,    2, 0x02 /* Public */,
       8,    1,   87,    2, 0x02 /* Public */,
       8,    0,   90,    2, 0x22 /* Public | MethodCloned */,
      10,    0,   91,    2, 0x02 /* Public */,
      11,    0,   92,    2, 0x02 /* Public */,
      12,    0,   93,    2, 0x02 /* Public */,
      13,    0,   94,    2, 0x02 /* Public */,
      14,    0,   95,    2, 0x02 /* Public */,
      15,    0,   96,    2, 0x02 /* Public */,
      16,    1,   97,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Int, QMetaType::QModelIndex,    9,
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   17,

       0        // eod
};

void Test::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Test *_t = static_cast<Test *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->clickCount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->printAll(); break;
        case 3: _t->addItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { int _r = _t->rowCount((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->rowCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->getData();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: _t->removeItem(); break;
        case 8: _t->removeCount(); break;
        case 9: { int _r = _t->btn1Count();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->btn2Count();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->currentStatus();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->changedStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Test::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_Test.data,
      qt_meta_data_Test,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Test::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Test.stringdata0))
        return static_cast<void*>(const_cast< Test*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
