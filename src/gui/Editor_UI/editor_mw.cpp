#include "editor_mw.h"
#include "ui_editor_mw.h"

Editor_MW::Editor_MW(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Editor_MW)
{
    ui->setupUi(this);
}

Editor_MW::~Editor_MW()
{
    delete ui;
}

