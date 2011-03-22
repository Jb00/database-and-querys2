#ifndef MAPWINCTRL_H
#define MAPWINCTRL_H

#include "adduserwindow.h"
#include "addfacility.h"
//#include "loginwindow.h"
#include "genui.h"
#include "map.h"

class MapWinCtrl: public genUI
{
public:

    MapWinCtrl();
    ~MapWinCtrl();

    void goToAddUser();
    void goToAddFac();
    //void goToLogin();

private:

    AddUserWindow* addUserWin;
    AddFacility* addFac;
    //LoginWindow* login;
    Map* map;
};

#endif // MAPWINCTRL_H
