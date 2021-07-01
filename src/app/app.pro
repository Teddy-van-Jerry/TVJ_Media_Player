QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TVJ_Media_Player
DESTDIR = ../../bin
#MOC_DIR = ../../temp/moc
#RCC_DIR = ../../temp/rcc
#UI_DIR = ../../temp/ui
#OBJECTS_DIR = ../../temp/obj

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

win32 {
LIBS += \
    ../../bin/player_core.dll \
    ../../bin/editor_core.dll \
    ../../bin/player_ui.dll \
    ../../bin/editor_ui.dll
}

unix {
LIBS += \
    ../../bin/libplayer_core.so \
    ../../bin/libeditor_core.so \
    ../../bin/libplayer_ui.so \
    ../../bin/libeditor_ui.so
}

# Software Information
VERSION = 0.0.0.4
win32 {
    QMAKE_TARGET_PRODUCT     = TVJ Media Player
    QMAKE_TARGET_COMPANY     = Teddy van Jerry
    QMAKE_TARGET_DESCRIPTION = Powerful Video and Music Player
    QMAKE_TARGET_COPYRIGHT   = Copyright (C) 2021 Teddy van Jerry
#   RC_ICONS += \
}

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
