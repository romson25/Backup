#-------------------------------------------------
#
# Project created by QtCreator 2015-10-23T21:23:56
#
#-------------------------------------------------

QT += network
QT += serialport

TARGET   = bruceCL_mk3
TEMPLATE = lib
CONFIG  += c++11

DEFINES += BRUCECL_MK3_LIBRARY

SOURCES += \
    TcpServer/photogram.cpp \
    DataProcessor/dataprocessorbase.cpp \
    TcpServer/tcpserver.cpp \
    TcpServer/tcpserverdataprocessor.cpp \
    UsbPort/usbport.cpp \
    UsbPort/usbportdataprocessor.cpp \
    TcpClient/tcpclient.cpp \
    TcpClient/tcpclientdataprocessor.cpp

HEADERS +=\
        brucecl_mk3_global.h \
    Connection/connectionstatus.h \
    Connection/iconnection.h \
    DataProcessor/datatype.h \
    DataProcessor/instruction.h \
    TcpServer/photogram.h \
    DataProcessor/dataprocessorbase.h \
    TcpServer/tcpserver.h \
    TcpServer/tcpserverdataprocessor.h \
    UsbPort/usbport.h \
    UsbPort/usbportdataprocessor.h \
    TcpClient/tcpclient.h \
    TcpClient/tcpclientdataprocessor.h \
    DataProcessor/messagetype.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

INCLUDEPATH += /usr/local/include
LIBS += -L/usr/local/lib
LIBS += -lopencv_core
LIBS += -lopencv_imgproc
LIBS += -lopencv_imgcodecs
