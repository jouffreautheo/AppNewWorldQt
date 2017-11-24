/********************************************************************************
** Form generated from reading UI file 'dialogchoix.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCHOIX_H
#define UI_DIALOGCHOIX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DialogChoix
{
public:

    void setupUi(QDialog *DialogChoix)
    {
        if (DialogChoix->objectName().isEmpty())
            DialogChoix->setObjectName(QStringLiteral("DialogChoix"));
        DialogChoix->resize(400, 300);

        retranslateUi(DialogChoix);

        QMetaObject::connectSlotsByName(DialogChoix);
    } // setupUi

    void retranslateUi(QDialog *DialogChoix)
    {
        DialogChoix->setWindowTitle(QApplication::translate("DialogChoix", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogChoix: public Ui_DialogChoix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCHOIX_H
