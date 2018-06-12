#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_open_triggered()
{
    //on efface la fenêtre
    ui->textEdit->clear();
    //On ouvre un navigateur de document pour ouvrir un fichier
    QString nomFichier=QFileDialog::getOpenFileName(this,"Essais fichiers","/home/tjouffreau","*.cpp");
    //le fichier selectionné est récuperé
    QFile monFichier(nomFichier);
    //on ouvre le fichier en lecture seul
    if(monFichier.open(QFile::ReadOnly|QIODevice::Text))
    {
        //On lis le fichier ligne par ligne
        QTextStream in(&monFichier);
        while(!in.atEnd())
        {
            QString ligneLue=in.readLine();
            //on renseigne la fenetre avec les lignes lu du fichier
            ui->textEdit->append(ligneLue);
        }
        //fermeture du fichier
        monFichier.close();
    }
    else
    {
        //en cas d'erreur d'ouverture
        statusBar()->showMessage("Sorry but this file cannot be opened");
    }

}

void MainWindow::on_action_Save_as_triggered()
{
    //on ouvre un navigateur de document pour enregistrer un fichier
    QFile monFichier(QFileDialog::getSaveFileName(this,"mon fichier"));
    //le fichier de la fentre est ouvert en écriture
    monFichier.open(QFile::WriteOnly);
    //sortie du fichier
    QTextStream out(&monFichier);
    //on fait sortir le fichier ligne par ligne
    QStringList listesDesLignes=ui->textEdit->toPlainText().split("\n");
    for(int noLigne=0;noLigne<listesDesLignes.size();noLigne++)
    {
        out<<listesDesLignes[noLigne]<<endl;
    }
    //fermeture du fichier
    monFichier.close();
}
