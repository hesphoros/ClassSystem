#include "mainwindow.h"

MainWindow::MainWindow(ElaWidget *parent)
    :ElaWindow(parent)
{
    initWindow();


    _closeDialog = new ElaContentDialog(this);
    connect(_closeDialog, &ElaContentDialog::rightButtonClicked, this, &MainWindow::closeWindow);
    connect(_closeDialog, &ElaContentDialog::middleButtonClicked, this, [=]() {
        _closeDialog->close();
        showMinimized();
    });
    this->setIsDefaultClosed(false);
    connect(this, &MainWindow::closeButtonClicked, this, [=]() {
        _closeDialog->exec();
    });
}

MainWindow::~MainWindow() {}

void MainWindow::initWindow(){



    this->head = QPixmap(":/headpic.jpg");
    this->setUserInfoCardTitle("ClassSystem");
    this->setUserInfoCardSubTitle("hesphoros@gmail.com");
    this->setUserInfoCardPixmap(head);
    this->setIsDefaultClosed(false);
    this->addFooterNode("About", nullptr, _aboutKey, 0, ElaIconType::User);
    moveToCenter();
}
