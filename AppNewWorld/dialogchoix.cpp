#include "dialogchoix.h"
#include "ui_dialogchoix.h"

DialogChoix::DialogChoix(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogChoix)
{
    ui->setupUi(this);
}

DialogChoix::~DialogChoix()
{
    delete ui;
}
