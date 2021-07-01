#ifndef EDITOR_MW_H
#define EDITOR_MW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Editor_MW; }
QT_END_NAMESPACE

class Editor_MW : public QMainWindow
{
    Q_OBJECT

public:
    Editor_MW(QWidget *parent = nullptr);
    ~Editor_MW();

private:
    Ui::Editor_MW *ui;
};
#endif // EDITOR_MW_H
