/****************************************************************************
** Meta object code from reading C++ file 'usbport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../UsbPort/usbport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usbport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UsbPort_t {
    QByteArrayData data[17];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UsbPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UsbPort_t qt_meta_stringdata_UsbPort = {
    {
QT_MOC_LITERAL(0, 0, 7), // "UsbPort"
QT_MOC_LITERAL(1, 8, 23), // "connectionStatusChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "ConnectionStatus"
QT_MOC_LITERAL(4, 50, 19), // "receivedInstruction"
QT_MOC_LITERAL(5, 70, 11), // "Instruction"
QT_MOC_LITERAL(6, 82, 7), // "message"
QT_MOC_LITERAL(7, 90, 11), // "MessageType"
QT_MOC_LITERAL(8, 102, 15), // "closeConnection"
QT_MOC_LITERAL(9, 118, 15), // "sendInstruction"
QT_MOC_LITERAL(10, 134, 15), // "setRotateNumber"
QT_MOC_LITERAL(11, 150, 14), // "openConnection"
QT_MOC_LITERAL(12, 165, 9), // "connected"
QT_MOC_LITERAL(13, 175, 12), // "disconnected"
QT_MOC_LITERAL(14, 188, 9), // "readyRead"
QT_MOC_LITERAL(15, 198, 17), // "emitInternalError"
QT_MOC_LITERAL(16, 216, 28) // "QSerialPort::SerialPortError"

    },
    "UsbPort\0connectionStatusChanged\0\0"
    "ConnectionStatus\0receivedInstruction\0"
    "Instruction\0message\0MessageType\0"
    "closeConnection\0sendInstruction\0"
    "setRotateNumber\0openConnection\0connected\0"
    "disconnected\0readyRead\0emitInternalError\0"
    "QSerialPort::SerialPortError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UsbPort[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    3,   80,    2, 0x06 /* Public */,
       6,    2,   87,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   92,    2, 0x0a /* Public */,
       9,    1,   93,    2, 0x0a /* Public */,
      10,    1,   96,    2, 0x0a /* Public */,
      11,    0,   99,    2, 0x0a /* Public */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,    2,

       0        // eod
};

void UsbPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UsbPort *_t = static_cast<UsbPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionStatusChanged((*reinterpret_cast< ConnectionStatus(*)>(_a[1]))); break;
        case 1: _t->receivedInstruction((*reinterpret_cast< Instruction(*)>(_a[1]))); break;
        case 2: _t->message((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->message((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->closeConnection(); break;
        case 5: _t->sendInstruction((*reinterpret_cast< Instruction(*)>(_a[1]))); break;
        case 6: _t->setRotateNumber((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->openConnection(); break;
        case 8: _t->connected(); break;
        case 9: _t->disconnected(); break;
        case 10: _t->readyRead(); break;
        case 11: _t->emitInternalError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UsbPort::*_t)(ConnectionStatus );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UsbPort::connectionStatusChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (UsbPort::*_t)(Instruction );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UsbPort::receivedInstruction)) {
                *result = 1;
            }
        }
        {
            typedef void (UsbPort::*_t)(MessageType , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UsbPort::message)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject UsbPort::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UsbPort.data,
      qt_meta_data_UsbPort,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UsbPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UsbPort::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UsbPort.stringdata0))
        return static_cast<void*>(const_cast< UsbPort*>(this));
    return QObject::qt_metacast(_clname);
}

int UsbPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void UsbPort::connectionStatusChanged(ConnectionStatus _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UsbPort::receivedInstruction(Instruction _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UsbPort::message(MessageType _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
