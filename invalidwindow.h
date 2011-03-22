#ifndef INVALIDWINDOW_H
#define INVALIDWINDOW_H

#include <QMainWindow>
//#include <QDesktopWidget>

#include "genui.h"

namespace Ui {
    class InvalidWindow;
}

class InvalidWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InvalidWindow(QWidget *parent = 0);
    ~InvalidWindow();

    //void center(QWidget &);

private:
    Ui::InvalidWindow *ui;
    void displayWarning();

private slots:

    void on_okBtn_clicked();
};

#endif // INVALIDWINDOW_H
