#ifndef DIALOGRAYON_H
#define DIALOGRAYON_H

#include <QDialog>

namespace Ui {
class DialogRayon;
}

class DialogRayon : public QDialog
{
    Q_OBJECT

public:
    explicit DialogRayon(QWidget *parent = 0);
    ~DialogRayon();

private slots:
    void on_pushButtonRetour_clicked();

    void on_pushButtonAjouter_clicked();

    void on_lineEditNom_textChanged(const QString &arg1);

private:
    Ui::DialogRayon *ui;
    void pushButtonAjouter();
};

#endif // DIALOGRAYON_H
