#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ElaWindow.h>
#include <ElaWidget.h>

class MainWindow : public ElaWindow
{
    Q_OBJECT

public:
    MainWindow(ElaWidget *parent = nullptr);
    ~MainWindow();
};
#endif // MAINWINDOW_H
