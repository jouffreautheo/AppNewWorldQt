#include "dialograyon.h"
#include "ui_dialograyon.h"
#include <QDebug>
#include <QSqlQuery>
#include <iostream>
#include "mainwindow.h"

DialogRayon::DialogRayon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogRayon)
{
    ui->setupUi(this);
}

DialogRayon::~DialogRayon()
{
    delete ui;
}

void DialogRayon::on_pushButtonRetour_clicked()
{
    qDebug()<<"void DialogRayon::on_pushButtonRetour_clicked()";
    this->close();
}

void DialogRayon::on_pushButtonAjouter_clicked()
{
    qDebug()<<"void DialogRayon::on_pushButtonRetour_clicked()";
    QString textPreReq="Select max(rayonId) from rayon";
    qDebug()<<textPreReq;
    QSqlQuery maPreReq(textPreReq);
    maPreReq.first();
    int rayonId = maPreReq.value(0).toInt();
    qDebug()<<rayonId;
    QString textReq="INSERT INTO rayon VALUES (?,'"+ui->lineEditNom->text()+"','"+ui->lineEditImage->text()+"',0)";
    qDebug()<<textReq;
    QSqlQuery maReq(textReq);
    maReq.addBindValue(rayonId+1);
    if(maReq.exec())
    {
        accept();
        ((MainWindow*)parent())->chargeRayon();
    }
}
void DialogRayon::pushButtonAjouter()
{
    ui->pushButtonAjouter->setEnabled(ui->lineEditNom->text().length()>2);
}

void DialogRayon::on_lineEditNom_textChanged(const QString &arg1)
{
    pushButtonAjouter();
}
