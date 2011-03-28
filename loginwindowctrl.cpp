#include <QApplication>

#include "loginwindowctrl.h"

LoginWindowCtrl::LoginWindowCtrl(QWidget *parent) :
        QWidget(parent){

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName ("/home/bartosz/Documents/EOBCSTORAGE");
    if (!db.open()) {
        QMessageBox::warning(this, QObject::tr("Unable to open database"), QObject::tr("An error occured while "
                                                                     "opening the connection: ") + db.lastError().text());}
}
LoginWindowCtrl::~LoginWindowCtrl(){}

bool LoginWindowCtrl::authenticate(QString n, QString p){

    QSqlQuery query("SELECT * FROM user");

    int pwordNum = query.record().indexOf("password");
    int nameNum = query.record().indexOf("username");

    while(query.next()){

        queryName = query.value(nameNum).toString();
        queryPword = query.value(pwordNum).toString();

        if(queryName.toStdString() == n.toStdString() && queryPword.toStdString() == p.toStdString())
            return true;
    }

return false;
}

void LoginWindowCtrl::invalid(){

    invalidEntry = new InvalidWindow();
    invalidEntry->show();
    genCTRL::center(*invalidEntry);
}

void LoginWindowCtrl::goToMap(){

    mapWin = new MapWindow();
    mapWin->show();
    genCTRL::center(*mapWin);
}


