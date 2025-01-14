#include "lcdnumberwin.h"
#include <QHBoxLayout>

LcdNumberWin::LcdNumberWin() {
    setWindowTitle("LcdNumberTime");
    _lcdNumber = new ElaLCDNumber(this);
    QHBoxLayout * h_layout = new QHBoxLayout();
    _lcdNumber->setIsUseAutoClock(true);
    _lcdNumber->setIsTransparent(false);
    _lcdNumber->setAutoClockFormat("hh:mm:ss");
    _lcdNumber->setAutoFillBackground(true);
    h_layout->addWidget(_lcdNumber);
    this->setLayout(h_layout);
    this->setFixedSize(400, 400);
    this->setMaximumSize(400,400);
    this->setMinimumSize(400,400);


}
