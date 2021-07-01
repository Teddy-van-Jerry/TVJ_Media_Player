TEMPLATE = subdirs

SUBDIRS += \
    app \
    core \
    gui

VERSION = 0.0.0.0

# Software Information
win32 {
    QMAKE_TARGET_PRODUCT     = TVJ Media Player
    QMAKE_TARGET_COMPANY     = Teddy van Jerry
    QMAKE_TARGET_DESCRIPTION = Powerful Video and Music Player
    QMAKE_TARGET_COPYRIGHT   = Copyright (C) 2021 Teddy van Jerry

#    RC_ICONS += \

LIBS += \
    ../bin/player_core.dll \
    ../bin/editor_core.dll \
    ../bin/player_ui.dll \
    ../bin/editor_ui.dll
}

unix {
LIBS += \
    ../bin/libplayer_core.so \
    ../bin/libeditor_core.so \
    ../bin/libplayer_ui.so \
    ../bin/libeditor_ui.so
}

# Dependency
app.depends = gui
gui.depends = core
