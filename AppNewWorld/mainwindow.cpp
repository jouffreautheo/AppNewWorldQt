#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialograyon.h"
#include "dialogtypeprod.h"
#include <QDebug>
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

void MainWindow::on_pushButtonRayon_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonRayon_clicked()";
    DialogRayon monDialogRayon;
    monDialogRayon.exec();
}

void MainWindow::on_pushButtonType_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonType_clicked()";
    DialogTypeProd monDialogTypeProd;
    monDialogTypeProd.exec();
}
