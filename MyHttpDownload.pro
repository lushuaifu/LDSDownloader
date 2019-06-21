#-------------------------------------------------
#
# Project created by QtCreator 2019-06-18T14:48:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets network

TARGET = MyHttpDownload
TEMPLATE = app


SOURCES += main.cpp\
        myhttpdownload.cpp \
    downloadmanager.cpp

HEADERS  += myhttpdownload.h \
    downloadmanager.h

FORMS    += myhttpdownload.ui

RESOURCES += \
    myhttpdownload.qrc
