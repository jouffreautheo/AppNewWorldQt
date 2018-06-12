/********************************************************************************
** Form generated from reading UI file 'dialogauth.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAUTH_H
#define UI_DIALOGAUTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DialogAuth
{
public:
    QFormLayout *formLayout;
    QLabel *labelAuth;
    QLabel *labelLogin;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonValider;
    QPushButton *pushButtonAnnuler;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditLogin;

    void setupUi(QDialog *DialogAuth)
    {
        if (DialogAuth->objectName().isEmpty())
            DialogAuth->setObjectName(QStringLiteral("DialogAuth"));
        DialogAuth->resize(308, 159);
        formLayout = new QFormLayout(DialogAuth);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelAuth = new QLabel(DialogAuth);
        labelAuth->setObjectName(QStringLiteral("labelAuth"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelAuth);

        labelLogin = new QLabel(DialogAuth);
        labelLogin->setObjectName(QStringLiteral("labelLogin"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelLogin);

        labelPassword = new QLabel(DialogAuth);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelPassword);

        lineEditPassword = new QLineEdit(DialogAuth);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditPassword);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButtonValider = new QPushButton(DialogAuth);
        pushButtonValider->setObjectName(QStringLiteral("pushButtonValider"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icones/emblem-default.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonValider->setIcon(icon);

        horizontalLayout->addWidget(pushButtonValider);

        pushButtonAnnuler = new QPushButton(DialogAuth);
        pushButtonAnnuler->setObjectName(QStringLiteral("pushButtonAnnuler"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icones/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAnnuler->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonAnnuler);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(3, QFormLayout::SpanningRole, horizontalLayout);

        lineEditLogin = new QLineEdit(DialogAuth);
        lineEditLogin->setObjectName(QStringLiteral("lineEditLogin"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditLogin);


        retranslateUi(DialogAuth);

        QMetaObject::connectSlotsByName(DialogAuth);
    } // setupUi

    void retranslateUi(QDialog *DialogAuth)
    {
        DialogAuth->setWindowTitle(QApplication::translate("DialogAuth", "Connexion \303\240 NewWorld", 0));
        labelAuth->setText(QApplication::translate("DialogAuth", "Authentification", 0));
        labelLogin->setText(QApplication::translate("DialogAuth", "Login", 0));
        labelPassword->setText(QApplication::translate("DialogAuth", "Mot de passe", 0));
        lineEditPassword->setText(QApplication::translate("DialogAuth", "admin", 0));
        pushButtonValider->setText(QApplication::translate("DialogAuth", "Ok", 0));
        pushButtonAnnuler->setText(QApplication::translate("DialogAuth", "Cancel", 0));
        lineEditLogin->setText(QApplication::translate("DialogAuth", "admin", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAuth: public Ui_DialogAuth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAUTH_H
