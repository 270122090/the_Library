#include "mainwindow.h"
#include "login.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QMessageBox msgBox;
    login gologin;
    gologin.setModal(true);

    if (gologin.exec() != QDialog::Accepted)
    {
        msgBox.setText("Wrong credentials. The program will stop.");
        msgBox.exec();
        a.quit();
    }
    else
    {
        a.exec();
    }

    return 0;
}
