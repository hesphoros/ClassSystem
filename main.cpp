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
    MainWindow w;

    w.setUserInfoCardTitle("极光十八班");
    w.setUserInfoCardSubTitle("hesphoros@gmail.com");
    QPixmap head (":/headpic.jpg");
    w.setUserInfoCardPixmap(head);
    w.show();
    return a.exec();
}
