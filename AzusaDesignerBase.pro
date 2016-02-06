#-------------------------------------------------
#
# Project created by QtCreator 2016-02-06T16:59:16
#
#-------------------------------------------------

QT       += widgets

TARGET = AzusaDesignerBase
TEMPLATE = lib

DEFINES += AZUSADESIGNERBASE_LIBRARY

SOURCES += \
    PluginMain.cpp

HEADERS +=\
        azusadesignerbase_global.h \
    PluginMain.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
