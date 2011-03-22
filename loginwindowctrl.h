#ifndef LOGINWINDOWCTRL_H
#define LOGINWINDOWCTRL_H

#include <QDialog>

#include "User.h"
#include "invalidwindow.h"
#include "mapwindow.h"

class LoginWindowCtrl: public genUI
{
public:
    LoginWindowCtrl();
    ~LoginWindowCtrl();

    User* authenticate(QString, QString);
    void invalid();
    void goToMap();

private:

    User* aUser;
    InvalidWindow* invalidEntry;
    MapWindow* mapWin;
};

#endif // LOGINWINDOWCTRL_H
