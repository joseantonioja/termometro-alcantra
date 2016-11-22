#-------------------------------------------------
#
# Project created by QtCreator 2016-11-22T08:12:52
#
#-------------------------------------------------

QT       += core gui
QT       += serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = termometro
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    temperaturereader.cpp

HEADERS  += mainwindow.h \
    temperaturereader.h

FORMS    += mainwindow.ui
