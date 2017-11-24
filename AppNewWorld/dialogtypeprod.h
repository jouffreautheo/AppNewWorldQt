#ifndef DIALOGTYPEPROD_H
#define DIALOGTYPEPROD_H

#include <QDialog>

namespace Ui {
class DialogTypeProd;
}

class DialogTypeProd : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTypeProd(QWidget *parent = 0);
    ~DialogTypeProd();

private slots:
    void on_pushButtonCancel_clicked();

    void on_pushButtonAjouter_clicked();

private:
    Ui::DialogTypeProd *ui;
};

#endif // DIALOGTYPEPROD_H
