/****************************************************************************
** Meta object code from reading C++ file 'tcpserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TcpServer/tcpserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TcpServer_t {
    QByteArrayData data[22];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpServer_t qt_meta_stringdata_TcpServer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TcpServer"
QT_MOC_LITERAL(1, 10, 23), // "connectionStatusChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "ConnectionStatus"
QT_MOC_LITERAL(4, 52, 19), // "receivedInstruction"
QT_MOC_LITERAL(5, 72, 11), // "Instruction"
QT_MOC_LITERAL(6, 84, 7), // "message"
QT_MOC_LITERAL(7, 92, 11), // "MessageType"
QT_MOC_LITERAL(8, 104, 20), // "serverAddressChanged"
QT_MOC_LITERAL(9, 125, 17), // "receivedPhotogram"
QT_MOC_LITERAL(10, 143, 10), // "Photogram&"
QT_MOC_LITERAL(11, 154, 12), // "angleChanged"
QT_MOC_LITERAL(12, 167, 21), // "removeOldestPhotogram"
QT_MOC_LITERAL(13, 189, 15), // "closeConnection"
QT_MOC_LITERAL(14, 205, 15), // "sendInstruction"
QT_MOC_LITERAL(15, 221, 14), // "openConnection"
QT_MOC_LITERAL(16, 236, 9), // "connected"
QT_MOC_LITERAL(17, 246, 12), // "disconnected"
QT_MOC_LITERAL(18, 259, 9), // "readyRead"
QT_MOC_LITERAL(19, 269, 17), // "emitInternalError"
QT_MOC_LITERAL(20, 287, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(21, 316, 13) // "newConnection"

    },
    "TcpServer\0connectionStatusChanged\0\0"
    "ConnectionStatus\0receivedInstruction\0"
    "Instruction\0message\0MessageType\0"
    "serverAddressChanged\0receivedPhotogram\0"
    "Photogram&\0angleChanged\0removeOldestPhotogram\0"
    "closeConnection\0sendInstruction\0"
    "openConnection\0connected\0disconnected\0"
    "readyRead\0emitInternalError\0"
    "QAbstractSocket::SocketError\0newConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       6,    3,  100,    2, 0x06 /* Public */,
       6,    2,  107,    2, 0x26 /* Public | MethodCloned */,
       8,    2,  112,    2, 0x06 /* Public */,
       9,    1,  117,    2, 0x06 /* Public */,
      11,    1,  120,    2, 0x06 /* Public */,
      12,    0,  123,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  124,    2, 0x0a /* Public */,
      14,    1,  125,    2, 0x0a /* Public */,
      15,    0,  128,    2, 0x0a /* Public */,
      16,    0,  129,    2, 0x08 /* Private */,
      17,    0,  130,    2, 0x08 /* Private */,
      18,    0,  131,    2, 0x08 /* Private */,
      19,    1,  132,    2, 0x08 /* Private */,
      21,    0,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void,

       0        // eod
};

void TcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TcpServer *_t = static_cast<TcpServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionStatusChanged((*reinterpret_cast< ConnectionStatus(*)>(_a[1]))); break;
        case 1: _t->receivedInstruction((*reinterpret_cast< Instruction(*)>(_a[1]))); break;
        case 2: _t->message((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->message((*reinterpret_cast< MessageType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->serverAddressChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->receivedPhotogram((*reinterpret_cast< Photogram(*)>(_a[1]))); break;
        case 6: _t->angleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->removeOldestPhotogram(); break;
        case 8: _t->closeConnection(); break;
        case 9: _t->sendInstruction((*reinterpret_cast< Instruction(*)>(_a[1]))); break;
        case 10: _t->openConnection(); break;
        case 11: _t->connected(); break;
        case 12: _t->disconnected(); break;
        case 13: _t->readyRead(); break;
        case 14: _t->emitInternalError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 15: _t->newConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TcpServer::*_t)(ConnectionStatus );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TcpServer::connectionStatusChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (TcpServer::*_t)(Instruction );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TcpServer::receivedInstruction)) {
                *result = 1;
            }
        }
        {
            typedef void (TcpServer::*_t)(MessageType , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TcpServer::message)) {
                *result = 2;
            }
        }
        {
            typedef void (TcpServer::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TcpServer::serverAddressChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (TcpServer::*_t)(Photogram & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TcpServer::receivedPhotogram)) {
                *result = 5;
            }
        }
        {
            typedef void (TcpServer::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TcpServer::angleChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (TcpServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TcpServer::removeOldestPhotogram)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject TcpServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TcpServer.data,
      qt_meta_data_TcpServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TcpServer.stringdata0))
        return static_cast<void*>(const_cast< TcpServer*>(this));
    if (!strcmp(_clname, "IConnection"))
        return static_cast< IConnection*>(const_cast< TcpServer*>(this));
    if (!strcmp(_clname, "com.bruceCL.IConnection/1.0"))
        return static_cast< IConnection*>(const_cast< TcpServer*>(this));
    return QObject::qt_metacast(_clname);
}

int TcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void TcpServer::connectionStatusChanged(ConnectionStatus _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TcpServer::receivedInstruction(Instruction _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TcpServer::message(MessageType _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void TcpServer::serverAddressChanged(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TcpServer::receivedPhotogram(Photogram & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TcpServer::angleChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TcpServer::removeOldestPhotogram()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
