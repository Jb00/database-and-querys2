#include "mapwindow.h"
#include "ui_mapwindow.h"

MapWindow::MapWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MapWindow)
{
    mapCtrl = new MapWinCtrl();
    QImage img("map.png");

    ui->setupUi(this);
    ui->mapImg->setScaledContents(TRUE);
    ui->mapImg->setPixmap(QPixmap::fromImage(img));

    ui->menuFile->addAction(ui->actionLogout);
    ui->menuAdmin->addAction(ui->actionAdd_newUser);
    ui->menuAdmin->addAction(ui->actionCreate_Facility);
    connect(ui->actionLogout, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionAdd_newUser, SIGNAL(triggered()), this, SLOT(createUser_clicked()));
    connect(ui->actionCreate_Facility, SIGNAL(triggered()), this, SLOT(createFac_clicked()));
}

MapWindow::~MapWindow()
{
    delete ui;
}


void MapWindow::createUser_clicked(){

    mapCtrl->goToAddUser();
}

void MapWindow::createFac_clicked(){

    mapCtrl->goToAddFac();
}

/*void MapWindow::logout_clicked(){

    mapCtrl->goToLogin();
}*/
