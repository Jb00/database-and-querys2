#ifndef ADDUSERCTRL_H
#define ADDUSERCTRL_H

#include <QDialog>
#include "genctrl.h"

class AddUserCtrl: public genCTRL
{
public:
    AddUserCtrl();
    ~AddUserCtrl();

    bool checkExisiting(QString);
    void addNewUser(QString, QString, QString, QString);

};

#endif // ADDUSERCTRL_H
