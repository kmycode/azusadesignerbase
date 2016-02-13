#-------------------------------------------------
#
# Project created by QtCreator 2016-02-06T16:59:16
#
#-------------------------------------------------

QT       += widgets

TARGET = AzusaDesignerBase
TEMPLATE = lib

DEFINES += AZUSADESIGNERBASE_LIBRARY

INCLUDEPATH += C:\Users\KMY\Music\Qt\AzusaDesignerProjects\AzusaDesignerSDK

SOURCES += \
    PluginMain.cpp \
    action/VersionAction/VersionAction.cpp

HEADERS +=\
        azusadesignerbase_global.h \
    PluginMain.h \
    action/VersionAction/VersionAction.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
