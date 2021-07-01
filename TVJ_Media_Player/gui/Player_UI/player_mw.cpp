#include "player_mw.h"
#include "ui_player_mw.h"

Player_MW::Player_MW(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Player_MW)
{
    ui->setupUi(this);
}

Player_MW::~Player_MW()
{
    delete ui;
}

