#ifndef MAPWINDOW_H
#define MAPWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>

#include "mapwinctrl.h"
#include "googlemap.h"

namespace Ui {
    class MapWindow;
}

class MapWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MapWindow(QWidget *parent = 0);
    ~MapWindow();

    void keyPressEvent(QKeyEvent * event);

private:
    Ui::MapWindow *ui;
    MapWinCtrl* mapCtrl;
    QGoogleMap* aMap;

private slots:

    void createUser_clicked();
    void createFac_clicked();
    //void logout_clicked();
};

#endif // MAPWINDOW_H

