#include "mapwinctrl.h"

MapWinCtrl::MapWinCtrl(){}
MapWinCtrl::~MapWinCtrl(){}

void MapWinCtrl::goToAddUser(){

    addUserWin = new AddUserWindow();
    addUserWin->show();
    genUI::center(*addUserWin);
}

void MapWinCtrl::goToAddFac(){

    addFac = new AddFacility();
    addFac->show();
    genUI::center(*addFac);
}

/*void MapWinCtrl::goToLogin(){

    login = new LoginWindow();
    login->show();
    genUI::center(*login);
}*/


