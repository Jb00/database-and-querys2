#include "mapwinctrl.h"

MapWinCtrl::MapWinCtrl(){}
MapWinCtrl::~MapWinCtrl(){}

void MapWinCtrl::goToAddUser(){

    addUserWin = new AddUserWindow();
    addUserWin->show();
    genCTRL::center(*addUserWin);
}

void MapWinCtrl::goToAddFac(){

    addFac = new AddFacility();
    addFac->show();
    genCTRL::center(*addFac);
}


