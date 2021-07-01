QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = lib
DEFINES += LIB_LIBRARY

CONFIG += \
    c++11 \
    plugin # no symbolic link on linux

TARGET = player_ui
DESTDIR = ../../../bin
#MOC_DIR = ../../../temp/moc
#RCC_DIR = ../../../temp/rcc
#UI_DIR = ../../../temp/ui
#OBJECTS_DIR = ../../../temp/obj

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    player_mw.cpp

HEADERS += \
    player_mw.h

FORMS += \
    player_mw.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
