/****************************************************************************
** Meta object code from reading C++ file 'tcpserverdataprocessor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TcpServer/tcpserverdataprocessor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpserverdataprocessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TcpServerDataProcessor_t {
    QByteArrayData data[10];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpServerDataProcessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpServerDataProcessor_t qt_meta_stringdata_TcpServerDataProcessor = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TcpServerDataProcessor"
QT_MOC_LITERAL(1, 23, 17), // "receivedPhotogram"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10), // "Photogram&"
QT_MOC_LITERAL(4, 53, 19), // "receivedInstruction"
QT_MOC_LITERAL(5, 73, 11), // "Instruction"
QT_MOC_LITERAL(6, 85, 7), // "message"
QT_MOC_LITERAL(7, 93, 11), // "MessageType"
QT_MOC_LITERAL(8, 105, 12), // "angleChanged"
QT_MOC_LITERAL(9, 118, 21) // "removeOldestPhotogram"

    },
    "TcpServerDataProcessor\0receivedPhotogram\0"
    "\0Photogram&\0receivedInstruction\0"
    "Instruction\0message\0MessageType\0"
    "angleChanged\0removeOldestPhotogram"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpServerDataProcessor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    3,   50,    2, 0x06 /* Public */,
       6,    2,   57,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   62,    2, 0x0a /* Public */,
       9,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,

       0        // eod
};

void TcpServerDataProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TcpServerDataProcessor *_t = static_cast<TcpServerDataProcessor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedPhotogram((*reinterpret_cast< Photogram(*)>(_a[1]))); break;
        case 1: _t->receivedInstruction((*reinterpret_cast< Instruction(*)>(_a[1]))); break;
        case 2: _t->message((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->message((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->angleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->removeOldestPhotogram(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TcpServerDataProcessor::*_t)(Photogram & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TcpServerDataProcessor::receivedPhotogram)) {
                *result = 0;
            }
        }
        {
            typedef void (TcpServerDataProcessor::*_t)(Instruction );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TcpServerDataProcessor::receivedInstruction)) {
                *result = 1;
            }
        }
        {
            typedef void (TcpServerDataProcessor::*_t)(MessageType , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TcpServerDataProcessor::message)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject TcpServerDataProcessor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TcpServerDataProcessor.data,
      qt_meta_data_TcpServerDataProcessor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TcpServerDataProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpServerDataProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TcpServerDataProcessor.stringdata0))
        return static_cast<void*>(const_cast< TcpServerDataProcessor*>(this));
    if (!strcmp(_clname, "DataProcessorBase"))
        return static_cast< DataProcessorBase*>(const_cast< TcpServerDataProcessor*>(this));
    return QObject::qt_metacast(_clname);
}

int TcpServerDataProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TcpServerDataProcessor::receivedPhotogram(Photogram & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TcpServerDataProcessor::receivedInstruction(Instruction _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TcpServerDataProcessor::message(MessageType _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
