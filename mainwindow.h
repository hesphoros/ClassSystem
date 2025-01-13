#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <ElaWindow.h>
#include <ElaWidget.h>
#include <ElaContentDialog.h>
#include <ElaIcon.h>
#include "aboutwindow.h"

class ElaContentDialog;

class MainWindow : public ElaWindow
{
    Q_OBJECT

public:
    MainWindow(ElaWidget *parent = nullptr);
    ~MainWindow();
public:

private:
    void initWindow();
    void initContent();
private:
    ElaContentDialog* _closeDialog{nullptr};
    QString _aboutKey{""};
    QPixmap head;

    AboutWindow *_aboutPage{nullptr};
};
#endif // MAINWINDOW_H
