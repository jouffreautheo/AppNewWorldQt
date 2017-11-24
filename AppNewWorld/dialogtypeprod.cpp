#include "dialogtypeprod.h"
#include "ui_dialogtypeprod.h"
#include <QDebug>
#include <QSqlQuery>

DialogTypeProd::DialogTypeProd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTypeProd)
{
    ui->setupUi(this);
}

DialogTypeProd::~DialogTypeProd()
{
    delete ui;
}

void DialogTypeProd::on_pushButtonCancel_clicked()
{
    qDebug()<<"void DialogTypeProd::on_pushButtonCancel_clicked()";
    this->close();
}

void DialogTypeProd::on_pushButtonAjouter_clicked()
{
    qDebug()<<"void DialogTypeProd::on_pushButtonAjouter_clicked()";
    QString textreq="UPDATE variete SET varNom='"+ui->lineEditNom->text()+"'";
    qDebug()<<textreq;
    QSqlQuery maRequete(textreq);
    maRequete.exec();
}
