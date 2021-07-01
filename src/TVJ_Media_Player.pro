TEMPLATE = subdirs

SUBDIRS += \
    app \
    core \
    gui

VERSION = 0.0.0.4

# Dependency
app.depends = gui
gui.depends = core
