#include "mainwindow.h"
#include <QHBoxLayout>
#include <QIcon>
#include <QVBoxLayout>
#include <QString>

MainWindow::MainWindow(ElaWidget *parent)
    :ElaWindow(parent)
{
    initWindow();
    initContent();

    // 拦截默认关闭事件
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
    moveToCenter();
}

MainWindow::~MainWindow() {}

void MainWindow::initWindow(){


    this->pSystemTray = new QSystemTrayIcon();
    if(nullptr != pSystemTray){
        //TODO:
        pSystemTray->setIcon(QIcon(":/icon.png"));
        pSystemTray->setVisible(true);
        pSystemTray->setToolTip("ClassSystem");
        pSystemTray->show();
    }
    setWindowIcon(QIcon(":/icon.png"));
    this->head = QPixmap(":/headpic.jpg");
    this->setUserInfoCardTitle("ClassSystem");
    this->setUserInfoCardSubTitle("hesphoros@gmail.com");
    this->setUserInfoCardPixmap(head);
    this->setIsDefaultClosed(false);
    this->addFooterNode("About", nullptr, _aboutKey, 0, ElaIconType::User);
    this->addFooterNode("LCDClock",nullptr,_lcdNumberKey,0,ElaIconType::AlarmClock);
    this->setNavigationBarDisplayMode(ElaNavigationType::Compact);
    this->setIsFixedSize(true);
}

void MainWindow::initContent(){
    _aboutPage = new AboutWindow();

    _aboutPage->hide();
    connect(this, &ElaWindow::navigationNodeClicked, this, [=](ElaNavigationType::NavigationNodeType nodeType, QString nodeKey) {
        if (_aboutKey == nodeKey)
        {
            _aboutPage->setFixedSize(400, 400);
            _aboutPage->moveToCenter();
            _aboutPage->show();
        }
    });

    _lcdNumberPage = new ElaLCDNumber();
    _lcdNumberPage->setIsUseAutoClock(true);
    _lcdNumberPage->setIsTransparent(false);
    //_lcdNumber->setAutoClockFormat("hh:mm:ss");
    _lcdNumberPage->setFixedHeight(100);
    _lcdNumberPage->hide();
    connect(this, &ElaWindow::navigationNodeClicked, this, [=](ElaNavigationType::NavigationNodeType nodeType, QString nodeKey) {
        if (_lcdNumberKey == nodeKey)
        {
            _lcdNumberPage->setFixedSize(660, 200);
            //this->hide();
            _lcdNumberPage->show();
        }
    });

    QString testKey;
    addExpanderNode("TEST1", testKey, ElaIconType::Acorn);
    addExpanderNode("TEST2", testKey, ElaIconType::Acorn);
    addExpanderNode("TEST3", testKey, ElaIconType::Acorn);
    addExpanderNode("TEST4", testKey, ElaIconType::Acorn);
    addExpanderNode("TEST5", testKey, ElaIconType::Acorn);
    addExpanderNode("TEST6", testKey, ElaIconType::Acorn);
    addExpanderNode("TEST7", testKey, ElaIconType::Acorn);
    addExpanderNode("TEST8", testKey, ElaIconType::Acorn);
    addExpanderNode("TEST9", testKey, ElaIconType::Acorn);

}
