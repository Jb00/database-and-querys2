#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QDialog>

#include "loginwindowctrl.h"
#include "mapwindow.h"

namespace Ui {
    class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

    void setColors();

private:
    Ui::LoginWindow *ui;

    //QObjects
    QString pword;
    QString name;

    //Class pointers
    LoginWindowCtrl* loginCtrl;
    User* aUser;

private slots:
    void on_cancelBtn_clicked();
    void on_loginBtn_clicked();

};

#endif // LOGINWINDOW_H
