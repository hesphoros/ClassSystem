#ifndef LCDNUMBERWIN_H
#define LCDNUMBERWIN_H

#include <QWidget>
#include <ElaWidget.h>

#include <ElaLCDNumber.h>

class LcdNumberWin : public ElaWidget
{
    Q_OBJECT
public:
    LcdNumberWin();
    ~LcdNumberWin(){};
private:
    ElaLCDNumber* _lcdNumber{nullptr};
};

#endif // LCDNUMBERWIN_H
