#include "player_mw.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Player_MW w;
    w.show();
    return a.exec();
}
