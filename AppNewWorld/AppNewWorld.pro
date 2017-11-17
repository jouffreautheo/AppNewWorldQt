#-------------------------------------------------
#
# Project created by QtCreator 2017-11-17T10:30:27
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AppNewWorld
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialogauth.cpp

HEADERS  += mainwindow.h \
    dialogauth.h

FORMS    += mainwindow.ui \
    dialogauth.ui
