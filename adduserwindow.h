#ifndef ADDUSERWINDOW_H
#define ADDUSERWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>

#include "adduserctrl.h"

namespace Ui {
    class AddUserWindow;
}

class AddUserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddUserWindow(QWidget *parent = 0);
    ~AddUserWindow();

    void keyPressEvent(QKeyEvent * event);

private:
    Ui::AddUserWindow *ui;
    AddUserCtrl* addUserCtrl;

    QString name;
    QString id;
    QString facName;
    QString careType;

private slots:

    void on_cancelBtn_clicked();
    void on_okBtn_clicked();
};

#endif // ADDUSERWINDOW_H
