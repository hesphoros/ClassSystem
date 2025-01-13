#ifndef ABOUTWINDOW_H
#define ABOUTWINDOW_H

#include <QObject>
#include <ElaWidget.h>



class AboutWindow :public ElaWidget
{
    Q_OBJECT
public:
    explicit AboutWindow(QWidget* parent = nullptr);
    ~AboutWindow();
};

#endif // ABOUTWINDOW_H
