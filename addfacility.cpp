#include "addfacility.h"
#include "ui_addfacility.h"

AddFacility::AddFacility(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddFacility)
{
    ui->setupUi(this);

    connect(ui->cancelBtn, SIGNAL(pressed()), this, SLOT(cancelBtn_clicked()));
    connect(ui->okBtn, SIGNAL(pressed()), this, SLOT(okBtn_clicked()));

}

AddFacility::~AddFacility()
{
    delete ui;
}

void AddFacility::okBtn_clicked(){

    name = ui->nameTxt->toPlainText();
    area = ui->areaTxt->toPlainText();
    NumberBedtotal = ui->bedsTxt->toPlainText();
    hasWaitingList = ui->waitingTxt->toPlainText();
}

void AddFacility::cancelBtn_clicked(){

    this->close();
}
