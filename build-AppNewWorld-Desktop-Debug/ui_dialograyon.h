/********************************************************************************
** Form generated from reading UI file 'dialograyon.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRAYON_H
#define UI_DIALOGRAYON_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogRayon
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditNom;
    QLabel *label_2;
    QLineEdit *lineEditImage;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonAjouter;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonRetour;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *DialogRayon)
    {
        if (DialogRayon->objectName().isEmpty())
            DialogRayon->setObjectName(QStringLiteral("DialogRayon"));
        DialogRayon->resize(354, 160);
        verticalLayout = new QVBoxLayout(DialogRayon);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_3 = new QLabel(DialogRayon);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(DialogRayon);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditNom = new QLineEdit(DialogRayon);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditNom);

        label_2 = new QLabel(DialogRayon);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditImage = new QLineEdit(DialogRayon);
        lineEditImage->setObjectName(QStringLiteral("lineEditImage"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditImage);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButtonAjouter = new QPushButton(DialogRayon);
        pushButtonAjouter->setObjectName(QStringLiteral("pushButtonAjouter"));
        pushButtonAjouter->setEnabled(false);

        horizontalLayout->addWidget(pushButtonAjouter);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButtonRetour = new QPushButton(DialogRayon);
        pushButtonRetour->setObjectName(QStringLiteral("pushButtonRetour"));

        horizontalLayout->addWidget(pushButtonRetour);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogRayon);

        QMetaObject::connectSlotsByName(DialogRayon);
    } // setupUi

    void retranslateUi(QDialog *DialogRayon)
    {
        DialogRayon->setWindowTitle(QApplication::translate("DialogRayon", "Dialog", 0));
        label_3->setText(QApplication::translate("DialogRayon", "Rayon", 0));
        label->setText(QApplication::translate("DialogRayon", "Nom", 0));
        label_2->setText(QApplication::translate("DialogRayon", "Image", 0));
        pushButtonAjouter->setText(QApplication::translate("DialogRayon", "Ajouter", 0));
        pushButtonRetour->setText(QApplication::translate("DialogRayon", "Retour", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogRayon: public Ui_DialogRayon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRAYON_H
