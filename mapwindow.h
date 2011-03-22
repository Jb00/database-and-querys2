#ifndef MAPWINDOW_H
#define MAPWINDOW_H

#include <QMainWindow>

#include "mapwinctrl.h"

namespace Ui {
    class MapWindow;
}

class MapWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MapWindow(QWidget *parent = 0);
    ~MapWindow();

private:
    Ui::MapWindow *ui;
    MapWinCtrl* mapCtrl;

private slots:

    void createUser_clicked();
    void createFac_clicked();
    //void logout_clicked();
};

#endif // MAPWINDOW_H

