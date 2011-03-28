#ifndef ADDFACCTRL_H
#define ADDFACCTRL_H

#include <QDialog>

#include "genctrl.h"

class AddFacCtrl: public genCTRL
{
public:
    AddFacCtrl();

    void addFacilityToMap(QString, QString, QString, QString, int, int, int, char);

    void invalid();
};

#endif // ADDFACCTRL_H
