#include "adduserwindow.h"
#include "ui_adduserwindow.h"

AddUserWindow::AddUserWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddUserWindow)
{
    ui->setupUi(this);

    connect(ui->cancelBtn, SIGNAL(pressed()), this, SLOT(on_cancelBtn_clicked()));
    connect(ui->okBtn, SIGNAL(pressed()), this, SLOT(on_okBtn_clicked()));

    addUserCtrl = new AddUserCtrl();
}

AddUserWindow::~AddUserWindow()
{
    delete ui;
}

void AddUserWindow::on_okBtn_clicked(){

    name = ui->nameTxt->toPlainText();
    id = ui->idTxt->toPlainText();
    facName = ui->facTxt->toPlainText();
    careType = ui->careTxt->toPlainText();
}

void AddUserWindow::on_cancelBtn_clicked(){

    this->close();
}
