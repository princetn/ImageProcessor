#-------------------------------------------------
#
# Project created by QtCreator 2024-06-27T15:46:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ImgProc
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mapconverter.cpp

HEADERS  += mainwindow.h \
    mapconverter.h

FORMS    += mainwindow.ui

CONFIG += link_pkgconfig
PKGCONFIG += opencv

INCLUDEPATH += /usr/include/opencv2

LIBS += -lopencv_core -lopencv_highgui -lopencv_imgproc
