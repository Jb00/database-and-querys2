#-------------------------------------------------
#
# Project created by QtCreator 2011-03-19T23:32:25
#
#-------------------------------------------------

QT       += core gui
QT       += webkit
QT       += sql

TARGET = LoginProcess
TEMPLATE = app


SOURCES += main.cpp\
        loginwindow.cpp \
    User.cpp \
    loginwindowctrl.cpp \
    mapwindow.cpp \
    invalidwindow.cpp \
    genui.cpp \
    mapwinctrl.cpp \
    adduserwindow.cpp \
    adduserctrl.cpp \
    map.cpp \
    Facility.cpp \
    addfacility.cpp \
    addfacctrl.cpp \
    googlemap.cpp \
    genctrl.cpp

HEADERS  += loginwindow.h \
    User.h \
    loginwindowctrl.h \
    mapwindow.h \
    invalidwindow.h \
    genui.h \
    mapwinctrl.h \
    adduserwindow.h \
    adduserctrl.h \
    map.h \
    Facility.h \
    addfacility.h \
    addfacctrl.h \
    googlemap.h \
    genctrl.h

FORMS    += loginwindow.ui \
    mapwindow.ui \
    invalidwindow.ui \
    adduserwindow.ui \
    addfacility.ui
