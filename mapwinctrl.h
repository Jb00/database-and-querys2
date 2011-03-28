#ifndef MAPWINCTRL_H
#define MAPWINCTRL_H

#include "adduserwindow.h"
#include "addfacility.h"
#include "genctrl.h"
#include "map.h"

class MapWinCtrl: public genCTRL
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
    Map* map;
};

#endif // MAPWINCTRL_H
