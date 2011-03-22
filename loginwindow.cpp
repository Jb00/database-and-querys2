#include "loginwindow.h"
#include "ui_loginwindow.h"

#include <iostream>

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->setPalette(Qt::black);
    setWindowTitle("EOBC Login");

    connect(ui->cancelBtn, SIGNAL(pressed()), this, SLOT(on_cancelBtn_clicked()));
    connect(ui->loginBtn, SIGNAL(pressed()), this, SLOT(on_loginBtn_clicked()));

    loginCtrl = new LoginWindowCtrl();

    setColors();
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_cancelBtn_clicked()
{
    this->close();
}

void LoginWindow::on_loginBtn_clicked()
{

    name = ui->nameTxtBox->toPlainText();
    pword = ui->pwordTxtBox->toPlainText();

    aUser = loginCtrl->authenticate(pword, name);

    if(aUser->getId() == pword.toInt() && aUser->getName() == name){

        loginCtrl->goToMap();
        this->close();
    }
    else{

        loginCtrl->invalid();
        ui->pwordTxtBox->clear();
        ui->nameTxtBox->clear();
    }

}

void LoginWindow::setColors(){

    QPalette labelPal(Qt::white);
    labelPal.setColor( QPalette::Text, QColor(0,0,0) );
    labelPal.setColor( QPalette::Foreground, QColor(255,255,255) );

    QPalette btnPal(Qt::black);
    //btnPal.setColor( QPalette::Button, QColor(0,0,0) );
    btnPal.setColor( QPalette::ButtonText, QColor(0,0,0) );

    ui->userLabel_2->setPalette(labelPal);
    ui->pwordLabel_2->setPalette(labelPal);

    ui->cancelBtn->setStyleSheet(" background-color: orange;");
    ui->cancelBtn->setPalette(btnPal);
    ui->loginBtn->setStyleSheet(" background-color: orange");
    ui->loginBtn->setPalette(btnPal);

    QImage welcome("welcome.png");

    ui->welcomeLabel->setScaledContents(TRUE);
    ui->welcomeLabel->setPixmap(QPixmap::fromImage(welcome));


}





