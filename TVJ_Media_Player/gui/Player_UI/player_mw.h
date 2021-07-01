#ifndef PLAYER_MW_H
#define PLAYER_MW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Player_MW; }
QT_END_NAMESPACE

class Player_MW : public QMainWindow
{
    Q_OBJECT

public:
    Player_MW(QWidget *parent = nullptr);
    ~Player_MW();

private:
    Ui::Player_MW *ui;
};
#endif // PLAYER_MW_H
