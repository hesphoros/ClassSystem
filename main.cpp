#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
#include <ElaApplication.h>
#include <ElaWindow.h>
#include <QPixmap>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ElaApplication::getInstance()->init();
    ElaApplication::getInstance()->setIsEnableMica(true);
    MainWindow w;


    w.show();
    return a.exec();
}
