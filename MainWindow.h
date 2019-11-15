#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "WeaponGlow.h"
#include "TextColor.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    WeaponGlow *weaponGlow;
    TextColor *textColor;
    QString path;
    QByteArray content;
    void setGlowColor(QColor color, int upgrade, int type);
    void setTableColor(QColor color, int number);
};

#endif // MAINWINDOW_H
