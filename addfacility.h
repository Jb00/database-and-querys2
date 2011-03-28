#ifndef ADDFACILITY_H
#define ADDFACILITY_H

#include <QMainWindow>
#include <QKeyEvent>
#include <iostream>

#include "addfacctrl.h"
#include "genui.h"

namespace Ui {
    class AddFacility;
}

class AddFacility : public QMainWindow, public genUI
{
    Q_OBJECT

public:
    explicit AddFacility(QWidget *parent = 0);
    ~AddFacility();

    void keyPressEvent(QKeyEvent * event);
    void setScheme();

private:
    Ui::AddFacility *ui;

    AddFacCtrl* addCtrl;

    QString name;
    QString id;
    QString xCoord;
    QString yCoord;

    int acute;
    int complex;
    int longTerm;

private slots:

    void cancelBtn_clicked();
    void okBtn_clicked();
    void typeRadio_selected();
};

#endif // ADDFACILITY_H
