TEMPLATE = subdirs

SUBDIRS += \
    app \
    core \
    gui

VERSION = 0.0.0.1

# Dependency
app.depends = gui
gui.depends = core
