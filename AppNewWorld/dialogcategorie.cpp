#include "dialogcategorie.h"
#include "ui_dialogcategorie.h"

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
