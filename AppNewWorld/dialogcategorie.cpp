#include "dialogcategorie.h"
#include "ui_dialogcategorie.h"
#include <QDebug>
#include "mainwindow.h"
#include <QSqlQuery>
#include <QMessageBox>

Dialogcategorie::Dialogcategorie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogcategorie)
{
    ui->setupUi(this);
}

Dialogcategorie::~Dialogcategorie()
{
    delete ui;
}

void Dialogcategorie::on_pushButtonRetour_clicked()
{
    qDebug()<<"void Dialogcategorie::on_pushButtonRetour_clicked()";
    this->close();
}

void Dialogcategorie::on_pushButtonAjouter_clicked()
{
    qDebug()<<"void Dialogcategorie::on_pushButtonAjouter_clicked()";
    QString textPreReq="Select max(prodID) from produit";
    qDebug()<<textPreReq;
    QSqlQuery maPreReq(textPreReq);
    maPreReq.first();
    int categId=maPreReq.value(0).toInt();
    qDebug()<<categId;
    int rayonId=((MainWindow*)parent())->RID;
    qDebug()<<rayonId;
    QString textReq="insert into produit values(?,'"+ui->lineEditNom->text()+"','"+ui->lineEditImage->text()+"',0,?)";
    qDebug()<<textReq;
    QSqlQuery maReq(textReq);
    maReq.addBindValue(categId+1);
    maReq.addBindValue(rayonId+1);
    if(maReq.exec())
    {
        accept();
        ((MainWindow*)parent())->chargeCateg(rayonId);
    }
}

void Dialogcategorie::on_pushButtonAide_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Vous ajouter une categorie de produit dans le rayon actuel , il vous faut choisir le bon rayon avant d'ajouter une categorie.");
    msgBox.exec();
}
