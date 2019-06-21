/****************************************************************************
** Meta object code from reading C++ file 'myhttpdownload.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../myhttpdownload.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myhttpdownload.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyHttpDownload_t {
    QByteArrayData data[10];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyHttpDownload_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyHttpDownload_t qt_meta_stringdata_MyHttpDownload = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MyHttpDownload"
QT_MOC_LITERAL(1, 15, 15), // "onStartDownload"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "onStopDownload"
QT_MOC_LITERAL(4, 47, 15), // "onCloseDownload"
QT_MOC_LITERAL(5, 63, 17), // "onDownloadProcess"
QT_MOC_LITERAL(6, 81, 13), // "bytesReceived"
QT_MOC_LITERAL(7, 95, 10), // "bytesTotal"
QT_MOC_LITERAL(8, 106, 15), // "onReplyFinished"
QT_MOC_LITERAL(9, 122, 18) // "on_btnOpen_clicked"

    },
    "MyHttpDownload\0onStartDownload\0\0"
    "onStopDownload\0onCloseDownload\0"
    "onDownloadProcess\0bytesReceived\0"
    "bytesTotal\0onReplyFinished\0"
    "on_btnOpen_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyHttpDownload[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    2,   47,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
       9,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void MyHttpDownload::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyHttpDownload *_t = static_cast<MyHttpDownload *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onStartDownload(); break;
        case 1: _t->onStopDownload(); break;
        case 2: _t->onCloseDownload(); break;
        case 3: _t->onDownloadProcess((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->onReplyFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_btnOpen_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MyHttpDownload::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MyHttpDownload.data,
      qt_meta_data_MyHttpDownload,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyHttpDownload::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyHttpDownload::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyHttpDownload.stringdata0))
        return static_cast<void*>(const_cast< MyHttpDownload*>(this));
    return QWidget::qt_metacast(_clname);
}

int MyHttpDownload::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
