/********************************************************************************
** Form generated from reading UI file 'player_mw.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_MW_H
#define UI_PLAYER_MW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Player_MW
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Player_MW)
    {
        if (Player_MW->objectName().isEmpty())
            Player_MW->setObjectName(QString::fromUtf8("Player_MW"));
        Player_MW->resize(800, 600);
        centralwidget = new QWidget(Player_MW);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Player_MW->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Player_MW);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Player_MW->setMenuBar(menubar);
        statusbar = new QStatusBar(Player_MW);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Player_MW->setStatusBar(statusbar);

        retranslateUi(Player_MW);

        QMetaObject::connectSlotsByName(Player_MW);
    } // setupUi

    void retranslateUi(QMainWindow *Player_MW)
    {
        Player_MW->setWindowTitle(QCoreApplication::translate("Player_MW", "Player_MW", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Player_MW: public Ui_Player_MW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_MW_H
