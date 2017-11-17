#include "dialogauth.h"
#include "ui_dialogauth.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
DialogAuth::DialogAuth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAuth)
{
    ui->setupUi(this);
    connect(ui->pushButtonAnnuler,SIGNAL(clicked()),this,SLOT(clicSurAnnuler()));
}

DialogAuth::~DialogAuth()
{
    delete ui;
}

//Vérification dans la base des logins et mots de passe des admins du site

void DialogAuth::on_pushButtonValider_clicked()
{
    //QDebug()<<"void DialogAuth::on_pushButtonValider_clicked()";
    //initiliasation de la requete
    QString req=("SELECt employeID, employeNom, employePrenom  FROM employe  Where employePassword="+ui->lineEditPassword->text()+" AND employeLogin="+ui->lineEditLogin->text()+";");
    QSqlQuery maRequete(req);
    if(maRequete.exec())
    {
        if(maRequete.numRowsAffected()==1)
        {
            accept();
        }
    }
}
void DialogAuth::clicSurAnnuler()
{
   // QDebug()<<"void DialogAuth::clicSurAnnuler()";
    this->close();
}
