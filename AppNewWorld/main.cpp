#include "mainwindow.h"
#include <QApplication>
#include "dialogauth.h"
#include <QSqlDatabase>
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    //initialisation de la base
    QSqlDatabase maBase;
    maBase=QSqlDatabase::addDatabase("QMYSQL");
    maBase.setUserName("userBO");
    maBase.setHostName("localhost");
    maBase.setPassword("QZg54Kl??.");
    maBase.setDatabaseName("dbtjNewWorld");
    maBase.open();
    DialogAuth monDialogLogin;
    if(monDialogLogin.exec()==QDialog::Accepted)
        {
            MainWindow w;
            w.show();
            return a.exec();
        }
        else
        {
            return -124;
        }
}
