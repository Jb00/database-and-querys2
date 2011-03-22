#include <QtGui/QApplication>
#include <QDesktopWidget>

#include "loginwindow.h"
#include "genui.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow w;
    w.show();

    genUI* temp = new genUI();
    temp->center(w);

    return a.exec();
}
