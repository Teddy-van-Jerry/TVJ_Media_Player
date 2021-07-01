/********************************************************************************
** Form generated from reading UI file 'editor_mw.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_MW_H
#define UI_EDITOR_MW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Editor_MW
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Editor_MW)
    {
        if (Editor_MW->objectName().isEmpty())
            Editor_MW->setObjectName(QString::fromUtf8("Editor_MW"));
        Editor_MW->resize(800, 600);
        centralwidget = new QWidget(Editor_MW);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Editor_MW->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Editor_MW);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Editor_MW->setMenuBar(menubar);
        statusbar = new QStatusBar(Editor_MW);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Editor_MW->setStatusBar(statusbar);

        retranslateUi(Editor_MW);

        QMetaObject::connectSlotsByName(Editor_MW);
    } // setupUi

    void retranslateUi(QMainWindow *Editor_MW)
    {
        Editor_MW->setWindowTitle(QCoreApplication::translate("Editor_MW", "Editor_MW", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Editor_MW: public Ui_Editor_MW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_MW_H
