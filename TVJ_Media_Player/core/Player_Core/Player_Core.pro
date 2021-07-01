QT -= gui

TEMPLATE = lib
DEFINES += PLAYER_CORE_LIBRARY

CONFIG += c++11

TARGET = player_core
DESTDIR = ../../bin

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    player_core.cpp

HEADERS += \
    Player_Core_global.h \
    player_core.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
