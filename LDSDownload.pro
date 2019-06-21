#-------------------------------------------------
#
# Project created by QtCreator 2019-06-20T16:35:02
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LDSDownload
TEMPLATE = app


SOURCES += main.cpp\
        myhttpdownload.cpp \
    downloadmanager.cpp

HEADERS  += myhttpdownload.h \
    downloadmanager.h

FORMS    += myhttpdownload.ui

RESOURCES += \
    myhttpdownload.qrc
