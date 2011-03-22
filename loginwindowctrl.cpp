#include <QApplication>

#include "loginwindowctrl.h"

LoginWindowCtrl::LoginWindowCtrl(){}
LoginWindowCtrl::~LoginWindowCtrl(){}

User* LoginWindowCtrl::authenticate(QString n, QString p){

    aUser = new User(1123, "Bart", "Hell");

return aUser;
}

void LoginWindowCtrl::invalid(){

    invalidEntry = new InvalidWindow();
    invalidEntry->show();
    genUI::center(*invalidEntry);
}

void LoginWindowCtrl::goToMap(){

    mapWin = new MapWindow();
    mapWin->show();
    genUI::center(*mapWin);
}


