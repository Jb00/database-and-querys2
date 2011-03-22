#ifndef ADDFACILITY_H
#define ADDFACILITY_H

#include <QMainWindow>

namespace Ui {
    class AddFacility;
}

class AddFacility : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddFacility(QWidget *parent = 0);
    ~AddFacility();

private:
    Ui::AddFacility *ui;

    QString name;
    QString area; //Do we agree to let it like that ? or We'll use an area objecT? We needed it for some waiting list and such. See later ?
    QString NumberBedtotal;
    QString hasWaitingList;

private slots:

    void cancelBtn_clicked();
    void okBtn_clicked();
};

#endif // ADDFACILITY_H
