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

private:
    Ui::DialogRayon *ui;
};

#endif // DIALOGRAYON_H
