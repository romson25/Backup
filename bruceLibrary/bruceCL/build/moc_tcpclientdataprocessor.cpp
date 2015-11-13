/****************************************************************************
** Meta object code from reading C++ file 'tcpclientdataprocessor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TcpClient/tcpclientdataprocessor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpclientdataprocessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TcpClientDataProcessor_t {
    QByteArrayData data[6];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpClientDataProcessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpClientDataProcessor_t qt_meta_stringdata_TcpClientDataProcessor = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TcpClientDataProcessor"
QT_MOC_LITERAL(1, 23, 19), // "receivedInstruction"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11), // "Instruction"
QT_MOC_LITERAL(4, 56, 7), // "message"
QT_MOC_LITERAL(5, 64, 11) // "MessageType"

    },
    "TcpClientDataProcessor\0receivedInstruction\0"
    "\0Instruction\0message\0MessageType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpClientDataProcessor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    3,   32,    2, 0x06 /* Public */,
       4,    2,   39,    2, 0x26 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    2,    2,

       0        // eod
};

void TcpClientDataProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TcpClientDataProcessor *_t = static_cast<TcpClientDataProcessor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedInstruction((*reinterpret_cast< Instruction(*)>(_a[1]))); break;
        case 1: _t->message((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->message((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TcpClientDataProcessor::*_t)(Instruction );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TcpClientDataProcessor::receivedInstruction)) {
                *result = 0;
            }
        }
        {
            typedef void (TcpClientDataProcessor::*_t)(MessageType , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TcpClientDataProcessor::message)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject TcpClientDataProcessor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TcpClientDataProcessor.data,
      qt_meta_data_TcpClientDataProcessor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TcpClientDataProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpClientDataProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TcpClientDataProcessor.stringdata0))
        return static_cast<void*>(const_cast< TcpClientDataProcessor*>(this));
    if (!strcmp(_clname, "DataProcessorBase"))
        return static_cast< DataProcessorBase*>(const_cast< TcpClientDataProcessor*>(this));
    return QObject::qt_metacast(_clname);
}

int TcpClientDataProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TcpClientDataProcessor::receivedInstruction(Instruction _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TcpClientDataProcessor::message(MessageType _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
