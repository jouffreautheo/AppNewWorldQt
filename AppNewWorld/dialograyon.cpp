#include "dialograyon.h"
#include "ui_dialograyon.h"
#include <QDebug>

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
