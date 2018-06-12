#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void chargeRayon();
    void chargeCateg(int rayonId);
    void chargeType(int categId);
    void chargeUM();
    void chargeRayon2();
    void chargeCateg2(int rayonId2);
    void chargeType2(int categId2);
    void chargeUM2();
    int RID;
    int CID;
    QString PID;
    QString PIC;
    QStringList listePID;

    ~MainWindow();

private slots:
    void on_pushButtonRayon_clicked();

    void on_pushButtonType_clicked();

    void on_pushButtonCategorie_clicked();

    void on_comboBoxCategorie_currentIndexChanged(const QString &arg1);

    void on_pushButtonProduit_clicked();

    void on_lineEditDescription_textChanged(const QString &arg1);

    void on_lineEditImage_textEdited(const QString &arg1);

    void on_comboBoxCategorie_2_currentIndexChanged(const QString &arg1);

    void on_pushButtonProduit_2_clicked();

    void on_tableWidgetProduit_2_doubleClicked(const QModelIndex &index);

    void on_tableWidgetProduit_2_clicked(const QModelIndex &index);

    void on_pushButtonGestSupprimer_clicked();

    void on_pushBoutonModifier_clicked();

    void on_comboBoxRayon_currentIndexChanged(const QString &arg1);

    void on_comboBoxRayon_2_currentIndexChanged(const QString &arg1);

    void on_pushButtonValidProduc_clicked();

    void on_pushButtonRefus_clicked();

    void on_tableWidgetProduc_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    bool chargementTerminer=false;
    bool chargementTerminer2=false;


};

#endif // MAINWINDOW_H
