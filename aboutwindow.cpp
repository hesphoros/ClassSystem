#include "aboutwindow.h"
#include <QHBoxLayout>
#include <QIcon>
#include <QVBoxLayout>

#include <ElaImageCard.h>
#include <ElaText.h>

AboutWindow::AboutWindow(QWidget* parent) :ElaWidget(parent) {
    setWindowTitle("关于...");
    setWindowIcon(QIcon(":/github.png"));
    this->setIsFixedSize(true);
    setWindowModality(Qt::ApplicationModal);
    setWindowButtonFlags(ElaAppBarType::CloseButtonHint);
    ElaImageCard* pixCard = new ElaImageCard(this);
    pixCard->setFixedSize(60, 60);
    pixCard->setIsPreserveAspectCrop(false);
    pixCard->setCardImage(QImage(":/github.png"));
    QVBoxLayout* pixCardLayout = new QVBoxLayout();
    pixCardLayout->addWidget(pixCard);
    pixCardLayout->addStretch();
    ElaText* versionText = new ElaText("ClassSystem-1.0.0", this);
    QFont versionTextFont = versionText->font();
    versionTextFont.setWeight(QFont::Bold);
    versionText->setFont(versionTextFont);
    versionText->setWordWrap(false);
    versionText->setTextPixelSize(18);
    ElaText* licenseText = new ElaText("MIT授权协议", this);
    licenseText->setWordWrap(false);
    licenseText->setTextPixelSize(14);
    ElaText* supportText = new ElaText("Windows支持版本: QT5.12以上\nLinux支持版本: Qt5.14以上", this);
    supportText->setWordWrap(false);
    supportText->setTextPixelSize(14);
    ElaText* contactText = new ElaText("作者: 1481458358@qq.com\n交流群:723550115(QQ)", this);
    contactText->setWordWrap(false);
    contactText->setTextInteractionFlags(Qt::TextSelectableByMouse);
    contactText->setTextPixelSize(14);

    ElaText* githubText = new ElaText("开源地址:hesphoros/ClassSystem\n",this);
    githubText->setWordWrap(false);
    githubText->setTextPixelSize(14);

    QVBoxLayout* textLayout = new QVBoxLayout();
    textLayout->setSpacing(15);
    textLayout->addWidget(versionText);
    textLayout->addWidget(licenseText);
    textLayout->addWidget(supportText);
    textLayout->addWidget(contactText);
    textLayout->addWidget(githubText);

    textLayout->addStretch();
    QHBoxLayout* contentLayout = new QHBoxLayout();
    contentLayout->addSpacing(30);
    contentLayout->addLayout(pixCardLayout);
    contentLayout->addSpacing(30);
    contentLayout->addLayout(textLayout);
    QVBoxLayout* mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0, 25, 0, 0);
    mainLayout->addLayout(contentLayout);
}

AboutWindow::~AboutWindow(){

}
