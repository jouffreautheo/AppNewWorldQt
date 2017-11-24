#ifndef DIALOGCHOIX_H
#define DIALOGCHOIX_H

#include <QDialog>

namespace Ui {
class DialogChoix;
}

class DialogChoix : public QDialog
{
    Q_OBJECT

public:
    explicit DialogChoix(QWidget *parent = 0);
    ~DialogChoix();

private:
    Ui::DialogChoix *ui;
};

#endif // DIALOGCHOIX_H
