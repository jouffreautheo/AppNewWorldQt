#include "dialogtypeprod.h"
#include "ui_dialogtypeprod.h"
#include <QDebug>
#include "mainwindow.h"
#include <QSqlQuery>
#include <QMessageBox>

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
    QString textPreReq="Select max(varId) from variete";
    qDebug()<<textPreReq;
    QSqlQuery maPreReq(textPreReq);
    maPreReq.first();
    int varId=maPreReq.value(0).toInt();
    qDebug()<<varId;
    int categId=((MainWindow*)parent())->CID;
    qDebug()<<categId;
    QString textreq="insert into variete values(?,'"+ui->lineEditNom->text()+"','"+ui->lineEditImage->text()+"','',0,?)";
    qDebug()<<textreq;
    QSqlQuery maRequete(textreq);
    maRequete.addBindValue(varId+1);
    maRequete.addBindValue(categId);
    if(maRequete.exec())
    {
        accept();
        ((MainWindow*)parent())->chargeType(categId);
    }

}

void DialogTypeProd::on_pushButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Vous ajoutez une variete de produit dans la categorie actuel , il vous faut sélectionner la bonne categorie avant d'ajouter une nouvelle variete.");
    msgBox.exec();
}

void DialogTypeProd::on_lineEditNom_textEdited(const QString &arg1)
{
    if(ui->lineEditNom->text().length()>2)
    {
        ui->pushButtonAjouter->setEnabled(true);
    }

}
