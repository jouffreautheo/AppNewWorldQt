#ifndef DIALOGCATEGORIE_H
#define DIALOGCATEGORIE_H

#include <QDialog>

namespace Ui {
class Dialogcategorie;
}

class Dialogcategorie : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogcategorie(QWidget *parent = 0);
    ~Dialogcategorie();

private:
    Ui::Dialogcategorie *ui;
};

#endif // DIALOGCATEGORIE_H
