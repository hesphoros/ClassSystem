#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <ElaWindow.h>
#include <ElaWidget.h>
#include <ElaContentDialog.h>
#include <ElaIcon.h>
#include <QSystemTrayIcon>
#include <ElaLCDNumber.h>
#include "aboutwindow.h"
#include "lcdnumberwin.h"

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
    LcdNumberWin* _lcdNumberPage{nullptr};
    QString _aboutKey{""};
    QString _lcdNumberKey{""};
    QPixmap head;
    QSystemTrayIcon* _pSystemTray;
    AboutWindow *_aboutPage{nullptr};

};
#endif // MAINWINDOW_H
