/********************************************************************************
** Form generated from reading UI file 'dialogtypeprod.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTYPEPROD_H
#define UI_DIALOGTYPEPROD_H

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

class Ui_DialogTypeProd
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEditNom;
    QLabel *label;
    QLineEdit *lineEditImage;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonAjouter;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *DialogTypeProd)
    {
        if (DialogTypeProd->objectName().isEmpty())
            DialogTypeProd->setObjectName(QStringLiteral("DialogTypeProd"));
        DialogTypeProd->resize(354, 160);
        verticalLayout = new QVBoxLayout(DialogTypeProd);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_3 = new QLabel(DialogTypeProd);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(DialogTypeProd);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEditNom = new QLineEdit(DialogTypeProd);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditNom);

        label = new QLabel(DialogTypeProd);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEditImage = new QLineEdit(DialogTypeProd);
        lineEditImage->setObjectName(QStringLiteral("lineEditImage"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditImage);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonAjouter = new QPushButton(DialogTypeProd);
        pushButtonAjouter->setObjectName(QStringLiteral("pushButtonAjouter"));
        pushButtonAjouter->setEnabled(false);

        horizontalLayout_2->addWidget(pushButtonAjouter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonCancel = new QPushButton(DialogTypeProd);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));

        horizontalLayout_2->addWidget(pushButtonCancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(DialogTypeProd);

        QMetaObject::connectSlotsByName(DialogTypeProd);
    } // setupUi

    void retranslateUi(QDialog *DialogTypeProd)
    {
        DialogTypeProd->setWindowTitle(QApplication::translate("DialogTypeProd", "Dialog", 0));
        label_3->setText(QApplication::translate("DialogTypeProd", "Type Produit", 0));
        label_2->setText(QApplication::translate("DialogTypeProd", "Nom", 0));
        label->setText(QApplication::translate("DialogTypeProd", "Image", 0));
        pushButtonAjouter->setText(QApplication::translate("DialogTypeProd", "Ajouter", 0));
        pushButtonCancel->setText(QApplication::translate("DialogTypeProd", "Retour", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogTypeProd: public Ui_DialogTypeProd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTYPEPROD_H
