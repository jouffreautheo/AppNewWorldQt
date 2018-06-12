#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialograyon.h"
#include "dialogtypeprod.h"
#include "dialogcategorie.h"
#include <QDebug>
#include <QSqlQuery>
#include <QBitmap>
QString cheminImage="/home/tjouffreau/Documents/AppNewWorldQt/AppNewWorld/img/";
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    chargeRayon();
    chargeRayon2();
    chargeUM();
    chargeUM2();

    QString textReq="select userNom,userPrenom,userMail,userAdresse,producID from utilisateur inner join producteur on utilisateur.utilisateurID=producteur.utilisateurID where producValidation=0";
    QSqlQuery maReq(textReq);
    if(maReq.exec())
    {
        while(maReq.next())
        {
            ui->tableWidgetProduc->setRowCount(ui->tableWidgetProduc->rowCount()+1);
            ui->tableWidgetProduc->setItem(ui->tableWidgetProduc->rowCount()-1,0,new QTableWidgetItem(maReq.value(0).toString()));
            ui->tableWidgetProduc->setItem(ui->tableWidgetProduc->rowCount()-1,1,new QTableWidgetItem(maReq.value(1).toString()));
            ui->tableWidgetProduc->setItem(ui->tableWidgetProduc->rowCount()-1,2,new QTableWidgetItem(maReq.value(3).toString()));
            ui->tableWidgetProduc->setItem(ui->tableWidgetProduc->rowCount()-1,3,new QTableWidgetItem(maReq.value(2).toString()));
            ui->tableWidgetProduc->setItem(ui->tableWidgetProduc->rowCount()-1,4,new QTableWidgetItem(maReq.value(4).toString()));
        }
        ui->tableWidgetProduc->hideColumn(4);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonRayon_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonRayon_clicked()";
    DialogRayon monDialogRayon(this);
    monDialogRayon.exec();
}

void MainWindow::on_pushButtonType_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonType_clicked()";
    DialogTypeProd monDialogTypeProd(this);
    monDialogTypeProd.exec();
}
void MainWindow::chargeRayon()
{
    ui->comboBoxRayon->clear();
    qDebug()<<"void MainWindow::chargeRayon()";
    QString textReq="select rayonNom from rayon";
    qDebug()<<textReq;
    QSqlQuery maReq(textReq);
    if(maReq.exec())  //si la requete s'execute bien
    {
      //parcours les enregistrement 1 par 1
        while(maReq.next())
        {
         //on ajoute l'option dans le combo
            ui->comboBoxRayon->addItem(maReq.value(0).toString());
        }
    }
    //Sans ce test les id se modifient lors du chargement ce qui créer une erreur de segmentation
    //alors on attend que tous les rayons soit charger pour activer le void MainWindow::on_comboBoxRayon_currentIndexChanged(int index)
    if(chargementTerminer==false)
    {
        chargementTerminer=true;
    }
}
void MainWindow::chargeRayon2()
{
    ui->comboBoxRayon_2->clear();
    qDebug()<<"void MainWindow::chargeRayon2()";
    QString textReq="select rayonNom from rayon";
    qDebug()<<textReq;
    QSqlQuery maReq(textReq);
    if(maReq.exec())  //si la requete s'execute bien
    {
      //parcours les enregistrement 1 par 1
        while(maReq.next())
        {
         //on ajoute l'option dans le combo
            ui->comboBoxRayon_2->addItem(maReq.value(0).toString());
        }
    }
    //Sans ce test les id se modifient lors du chargement ce qui créer une erreur de segmentation
    //alors on attend que tous les rayons soit charger pour activer le void MainWindow::on_comboBoxRayon_currentIndexChanged(int index)
    if(chargementTerminer2==false)
    {
        chargementTerminer2=true;
    }
}

void MainWindow::on_pushButtonCategorie_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonproduit_clicked()";
    Dialogcategorie monDialogueCateg(this);
    monDialogueCateg.exec();
}
void MainWindow::chargeCateg(int rayonId)
{
    ui->comboBoxCategorie->clear();
    qDebug()<<"void MainWindow::chargeprod(int rayonId)";
    qDebug()<<rayonId;
    QString textReq="select prodID,prodNom from produit inner join rayon on produit.rayonId = rayon.rayonId where produit.rayonId='?'";
    qDebug()<<textReq;
    QSqlQuery maReq(textReq);
    maReq.addBindValue(rayonId);
   if(maReq.exec())
   {
       while(maReq.next())
       {
           ui->comboBoxCategorie->addItem(maReq.value("prodNom").toString(),maReq.value("prodID").toString());
       }
   }
}
void MainWindow::chargeCateg2(int rayonId2)
{
    ui->comboBoxCategorie_2->clear();
    qDebug()<<"void MainWindow::chargeprod2(int rayonId2)";
    qDebug()<<rayonId2;
    QString textReq="select prodID,prodNom from produit inner join rayon on produit.rayonId = rayon.rayonId where produit.rayonId='?'";
    qDebug()<<textReq;
    QSqlQuery maReq(textReq);
    maReq.addBindValue(rayonId2);
   if(maReq.exec())
   {
       while(maReq.next())
       {
           ui->comboBoxCategorie_2->addItem(maReq.value("prodNom").toString(),maReq.value("prodID").toString());
       }
   }
}

void MainWindow::chargeType(int prodID)
{
    qDebug()<<"void MainWindow::chargeType(int prodID)";
    qDebug()<<prodID;
    QString textReq="select varId, varNom from variete inner join produit on variete.prodID=produit.prodID where variete.prodID='?'";
    qDebug()<<textReq;
    QSqlQuery maReq(textReq);
    maReq.addBindValue(prodID);
    if(maReq.exec())
    {
        while(maReq.next())
        {
            ui->comboBoxType->addItem(maReq.value("varNom").toString(),maReq.value("varId").toString());
        }
    }
    ui->pushButtonType->setEnabled(true);
}
void MainWindow::chargeType2(int prodID2)
{
    qDebug()<<"void MainWindow::chargeType2(int prodID2)";
    qDebug()<<prodID2;
    QString textReq="select varId, varNom from variete inner join produit on variete.prodID=produit.prodID where variete.prodID='?'";
    qDebug()<<textReq;
    QSqlQuery maReq(textReq);
    maReq.addBindValue(prodID2);
    if(maReq.exec())
    {
        while(maReq.next())
        {
            ui->comboBoxType_2->addItem(maReq.value("varNom").toString(),maReq.value("varId").toString());
        }
    }
}

void MainWindow::chargeUM()
{
    qDebug()<<"void MainWindow::chargeUM2()";
    QString textReq="select umNom from uniteMesure";
    QSqlQuery maReq(textReq);
    if(maReq.exec())
    {
        while(maReq.next())
        {
            ui->comboBoxUM->addItem(maReq.value("umNom").toString());
        }
    }
}
void MainWindow::chargeUM2()
{
    qDebug()<<"void MainWindow::chargeUM2()";
    QString textReq="select umNom from uniteMesure";
    QSqlQuery maReq(textReq);
    if(maReq.exec())
    {
        while(maReq.next())
        {
            ui->comboBoxUM_2->addItem(maReq.value("umNom").toString());
        }
    }
}

void MainWindow::on_comboBoxCategorie_currentIndexChanged(const QString &arg1)
{
       qDebug()<<"voconst QModelIndex &indexid MainWindow::on_comboBoxproduit_currentIndexChanged(const QString &arg1)";
       ui->comboBoxType->clear();
       CID=ui->comboBoxCategorie->currentData().toInt();
       chargeType(ui->comboBoxCategorie->currentData().toInt());
}
void MainWindow::on_comboBoxCategorie_2_currentIndexChanged(const QString &arg1)
{
    qDebug()<<"void MainWindow::on_comboBoxproduit2_currentIndexChanged(const QString &arg1)";
    ui->comboBoxType_2->clear();
    chargeType2(ui->comboBoxCategorie_2->currentData().toInt());
}
void MainWindow::on_pushButtonProduit_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonProduit_clicked()";
    ui->tableWidgetProduit->setRowCount(ui->tableWidgetProduit->rowCount()+1);
    ui->tableWidgetProduit->setItem(ui->tableWidgetProduit->rowCount()-1,0,new QTableWidgetItem(ui->comboBoxCategorie->currentText()));
    ui->tableWidgetProduit->setItem(ui->tableWidgetProduit->rowCount()-1,1,new QTableWidgetItem(ui->comboBoxRayon->currentText()));
    ui->tableWidgetProduit->setItem(ui->tableWidgetProduit->rowCount()-1,2,new QTableWidgetItem(ui->comboBoxType->currentText()));
    ui->tableWidgetProduit->setItem(ui->tableWidgetProduit->rowCount()-1,3,new QTableWidgetItem(ui->comboBoxUM->currentText()));
    ui->tableWidgetProduit->setItem(ui->tableWidgetProduit->rowCount()-1,4,new QTableWidgetItem(ui->lineEditDescription->text()));
    int typeId=ui->comboBoxType->currentData().toInt();
    int umId=ui->comboBoxUM->currentIndex();
    qDebug()<<typeId;
    qDebug()<<umId;

    QString textReq("select varId from variete where varNom=?");
    QSqlQuery maReq(textReq);
    maReq.addBindValue(ui->comboBoxType->currentText());
    maReq.exec();
    maReq.first();
    QString textReq2("update variete set varDescription=? , varImage=? where varId=?");
    QSqlQuery maReq2(textReq2);
    maReq2.addBindValue(ui->lineEditDescription->text());
    maReq2.addBindValue(ui->lineEditImage->text());
    maReq2.addBindValue(maReq.value(0).toString());
    maReq2.exec();

    ui->tableWidgetProduit_2->setRowCount(ui->tableWidgetProduit_2->rowCount()+1);
    ui->tableWidgetProduit_2->setItem(ui->tableWidgetProduit_2->rowCount()-1,0,new QTableWidgetItem(ui->comboBoxCategorie->currentText()));
    ui->tableWidgetProduit_2->setItem(ui->tableWidgetProduit_2->rowCount()-1,1,new QTableWidgetItem(ui->comboBoxRayon->currentText()));
    ui->tableWidgetProduit_2->setItem(ui->tableWidgetProduit_2->rowCount()-1,2,new QTableWidgetItem(ui->comboBoxType->currentText()));
    ui->tableWidgetProduit_2->setItem(ui->tableWidgetProduit_2->rowCount()-1,3,new QTableWidgetItem(ui->comboBoxUM->currentText()));
    ui->tableWidgetProduit_2->setItem(ui->tableWidgetProduit_2->rowCount()-1,4,new QTableWidgetItem(ui->lineEditDescription->text()));

    ui->lineEditDescription->clear();
}

void MainWindow::on_lineEditDescription_textChanged(const QString &arg1)
{
    qDebug()<<"void MainWindow::on_lineEditDescription_textChanged(const QString &arg1)";
    ui->pushButtonProduit->setEnabled(true);
}
void MainWindow::on_lineEditImage_textEdited(const QString &arg1)
{
    qDebug()<<cheminImage+ui->lineEditImage->text();
    ui->labelleImage->setPixmap(QPixmap(cheminImage+ui->lineEditImage->text()));

}

void MainWindow::on_pushButtonProduit_2_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonProduit_2_clicked()";
    QString textReq="update variete set varValid=1 where varNom=?";
    qDebug()<<ui->comboBoxType_2->currentText();
    QSqlQuery maReq(textReq);
    maReq.addBindValue(ui->comboBoxType_2->currentText());
    QString textReq2="update produit set prodValid=1 where prodNom=?";
    qDebug()<<ui->comboBoxCategorie_2->currentText();
    QSqlQuery maReq2(textReq2);
    maReq2.addBindValue(ui->comboBoxCategorie_2->currentText());
    QString textReq3="update rayon set rayonValid=1 where rayonNom=?";
    qDebug()<<ui->comboBoxRayon_2->currentText();
    QSqlQuery maReq3(textReq3);
    maReq3.addBindValue(ui->comboBoxRayon_2->currentText());
    if(maReq.exec() && maReq2.exec() && maReq3.exec())
    {
        qDebug()<<"Validation effectué";
    }
    ui->lineEditDescription_2->clear();
    chargeRayon();
    chargeRayon2();
    chargeCateg(1);
    chargeCateg2(1);
    chargeType(1);
    chargeType2(1);
    int ligne=ui->tableWidgetProduit_2->currentRow();
    ui->tableWidgetProduit_2->removeRow(ligne);
}

void MainWindow::on_tableWidgetProduit_2_doubleClicked(const QModelIndex &index)
{
    chargeRayon2();
    chargeCateg2(0);
    chargeType2(0);
    ui->pushButtonProduit_2->setEnabled(true);
    qDebug()<<"void MainWindow::on_tableWidgetProduit_2_doubleClicked(const QModelIndex &index)";
    ui->lineEditDescription_2->setText(ui->tableWidgetProduit_2->item(index.row(),4)->text());
    ui->comboBoxCategorie_2->setCurrentText(ui->tableWidgetProduit_2->item(index.row(),0)->text());
    ui->comboBoxRayon_2->setCurrentText(ui->tableWidgetProduit_2->item(index.row(),1)->text());
    ui->comboBoxType_2->setCurrentText(ui->tableWidgetProduit_2->item(index.row(),2)->text());
    ui->comboBoxUM_2->setCurrentText(ui->tableWidgetProduit_2->item(index.row(),3)->text());

}

void MainWindow::on_tableWidgetProduit_2_clicked(const QModelIndex &index)
{
    qDebug()<<"void MainWindow::on_tableWidgetProduit_2_clicked(const QModelIndex &index)";
    if(ui->tableWidgetProduit_2->selectedItems().length()>0)
    {
        qDebug()<<"oui";
        ui->pushButtonGestSupprimer->setEnabled(true);
        ui->pushBoutonModifier->setEnabled(true);
    }
    else
    {
        listePID.clear();
        ui->pushBoutonModifier->setDisabled(true);
        ui->pushButtonProduit_2->setDisabled(true);
        ui->pushButtonGestSupprimer->setDisabled(true);
    }
}

void MainWindow::on_pushButtonGestSupprimer_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonGestSupprimer_clicked()";
        QString textReq="delete from variete where varNom=? and varValid=0";
        qDebug()<<ui->comboBoxType_2->currentText();
        QSqlQuery maReq(textReq);
        maReq.addBindValue(ui->comboBoxType_2->currentText());
        QString textReq2="delete from produit where prodNom=? and prodValid=0";
        qDebug()<<ui->comboBoxCategorie_2->currentText();
        QSqlQuery maReq2(textReq2);
        maReq2.addBindValue(ui->comboBoxCategorie_2->currentText());
        QString textReq3="delete from rayon where rayonNom=? and rayonValid=0";
        qDebug()<<ui->comboBoxRayon_2->currentText();
        QSqlQuery maReq3(textReq3);
        maReq3.addBindValue(ui->comboBoxRayon_2->currentText());
        if(maReq.exec() && maReq2.exec() && maReq3.exec())
        {
            qDebug()<<"Suppression effectué";
        }
        ui->lineEditDescription_2->clear();
        chargeRayon();
        chargeRayon2();
        chargeCateg(1);
        chargeCateg2(1);
        chargeType(1);
        chargeType2(1);
        int ligne=ui->tableWidgetProduit_2->currentRow();
        ui->tableWidgetProduit_2->removeRow(ligne);
}

void MainWindow::on_pushBoutonModifier_clicked()
{
    qDebug()<<"void MainWindow::on_pushBoutonModifier_clicked()";

    QString textReq="select varId from variete where varNom=?";
    QSqlQuery maReq(textReq);
    qDebug()<<ui->comboBoxType_2->currentText();
    maReq.addBindValue(ui->comboBoxType_2->currentText());
    if (maReq.exec()){
    maReq.first();

    QString textReq3="update variete set varDescription=?,varImage=? where varId=?";
    QSqlQuery maReq3(textReq3);
    maReq3.addBindValue(ui->lineEditDescription_2->text());
    qDebug()<<ui->lineEditDescription_2->text();
    maReq3.addBindValue(ui->lineEditImage_2->text());
    qDebug()<<ui->lineEditImage_2->text();
    maReq3.addBindValue(maReq.value(0).toString());

    if(maReq3.exec())
    {
        qDebug()<<"requete bonne";
        int ligne=ui->tableWidgetProduit_2->currentRow();
        ui->tableWidgetProduit_2->removeRow(ligne);
        ui->tableWidgetProduit_2->setRowCount(ui->tableWidgetProduit_2->rowCount()+1);
        ui->tableWidgetProduit_2->setItem(ui->tableWidgetProduit_2->rowCount()-1,0,new QTableWidgetItem(ui->comboBoxCategorie_2->currentText()));
        ui->tableWidgetProduit_2->setItem(ui->tableWidgetProduit_2->rowCount()-1,1,new QTableWidgetItem(ui->comboBoxRayon_2->currentText()));
        ui->tableWidgetProduit_2->setItem(ui->tableWidgetProduit_2->rowCount()-1,2,new QTableWidgetItem(ui->comboBoxType_2->currentText()));
        ui->tableWidgetProduit_2->setItem(ui->tableWidgetProduit_2->rowCount()-1,3,new QTableWidgetItem(ui->comboBoxUM_2->currentText()));
        ui->tableWidgetProduit_2->setItem(ui->tableWidgetProduit_2->rowCount()-1,4,new QTableWidgetItem(ui->lineEditDescription_2->text()));
    }
    }

}

void MainWindow::on_comboBoxRayon_currentIndexChanged(const QString &arg1)
{
    qDebug()<<"void MainWindow::on_comboBoxRayon_currentIndexChanged(const QString &arg1)";
    qDebug()<<arg1;
    QString textReq="select rayonId from rayon where rayonNom=?";
    QSqlQuery maReq(textReq);
    maReq.addBindValue(arg1);
    maReq.exec();
    maReq.first();
    RID=maReq.value(0).toInt();
    if(chargementTerminer==true)
    {
        chargeCateg(RID);
    }
}

void MainWindow::on_comboBoxRayon_2_currentIndexChanged(const QString &arg1)
{
    qDebug()<<"void MainWindow::on_comboBoxRayon2_currentIndexChanged(const QString &arg1)";
    qDebug()<<arg1;
    QString textReq="select rayonId from rayon where rayonNom=?";
    QSqlQuery maReq(textReq);
    maReq.addBindValue(arg1);
    maReq.exec();
    maReq.first();
    RID=maReq.value(0).toInt();
    if(chargementTerminer==true)
    {
        chargeCateg2(RID);
    }
}

void MainWindow::on_pushButtonValidProduc_clicked()
{

}

void MainWindow::on_pushButtonRefus_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonRefus_clicked()";
    QString textReq="delete from producteur where producValidation=0 and producID=?";
    QSqlQuery maReq(textReq);
    qDebug()<<PID;
    maReq.addBindValue(PID);
    maReq.exec();
    int ligne=ui->tableWidgetProduc->currentRow();
    ui->tableWidgetProduc->removeRow(ligne);
}

void MainWindow::on_tableWidgetProduc_clicked(const QModelIndex &index)
{
    qDebug()<<"void MainWindow::on_tableWidgetProduc_clicked(const QModelIndex &index)";
    qDebug()<<ui->tableWidgetProduc->item(index.row(),4)->text();
    PID=ui->tableWidgetProduc->item(index.row(),4)->text();
}
