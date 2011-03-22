#include "invalidwindow.h"
#include "ui_invalidwindow.h"

InvalidWindow::InvalidWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InvalidWindow)
{
    ui->setupUi(this);
    this->setPalette(Qt::white);
    connect(ui->okBtn, SIGNAL(clicked()), this, SLOT(on_okBtn_clicked()));

    displayWarning();
}

InvalidWindow::~InvalidWindow()
{
    delete ui;
}

void InvalidWindow::on_okBtn_clicked(){

    this->close();
}

void InvalidWindow::displayWarning(){

    QImage warning("warning.jpg");
    ui->warningImg->setScaledContents(TRUE);
    ui->warningImg->setPixmap(QPixmap::fromImage(warning));
}
