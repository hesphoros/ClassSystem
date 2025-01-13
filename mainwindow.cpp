#include "mainwindow.h"

MainWindow::MainWindow(ElaWidget *parent)
    :ElaWindow(parent)
{

}

MainWindow::~MainWindow() {}

void MainWindow::init(){
    this->head = QPixmap(":/headpic.jpg");
    this->setUserInfoCardTitle("极光十八班");
    this->setUserInfoCardSubTitle("hesphoros@gmail.com");
    this->setUserInfoCardPixmap(head);

}
