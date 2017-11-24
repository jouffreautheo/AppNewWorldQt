/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelProduit;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *labelUM;
    QLabel *labelDescription;
    QComboBox *comboBoxUM;
    QComboBox *comboBoxRayon;
    QLineEdit *lineEditImage;
    QLineEdit *lineEditDescription;
    QPushButton *pushButtonRayon;
    QLabel *labelImage;
    QLabel *labelNom;
    QLineEdit *lineEditProduit;
    QPushButton *pushButtonType;
    QComboBox *comboBoxType;
    QLabel *labelRayon;
    QLabel *labelType;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonProduit;
    QSpacerItem *horizontalSpacer_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1178, 801);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->horizontalHeader()->setDefaultSectionSize(230);

        verticalLayout_2->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelProduit = new QLabel(centralWidget);
        labelProduit->setObjectName(QStringLiteral("labelProduit"));

        horizontalLayout->addWidget(labelProduit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelUM = new QLabel(centralWidget);
        labelUM->setObjectName(QStringLiteral("labelUM"));

        gridLayout->addWidget(labelUM, 4, 0, 1, 1);

        labelDescription = new QLabel(centralWidget);
        labelDescription->setObjectName(QStringLiteral("labelDescription"));

        gridLayout->addWidget(labelDescription, 4, 4, 1, 1);

        comboBoxUM = new QComboBox(centralWidget);
        comboBoxUM->setObjectName(QStringLiteral("comboBoxUM"));

        gridLayout->addWidget(comboBoxUM, 4, 1, 1, 1);

        comboBoxRayon = new QComboBox(centralWidget);
        comboBoxRayon->setObjectName(QStringLiteral("comboBoxRayon"));

        gridLayout->addWidget(comboBoxRayon, 0, 1, 1, 1);

        lineEditImage = new QLineEdit(centralWidget);
        lineEditImage->setObjectName(QStringLiteral("lineEditImage"));

        gridLayout->addWidget(lineEditImage, 2, 5, 1, 1);

        lineEditDescription = new QLineEdit(centralWidget);
        lineEditDescription->setObjectName(QStringLiteral("lineEditDescription"));

        gridLayout->addWidget(lineEditDescription, 4, 5, 1, 1);

        pushButtonRayon = new QPushButton(centralWidget);
        pushButtonRayon->setObjectName(QStringLiteral("pushButtonRayon"));
        pushButtonRayon->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(pushButtonRayon, 0, 2, 1, 1);

        labelImage = new QLabel(centralWidget);
        labelImage->setObjectName(QStringLiteral("labelImage"));

        gridLayout->addWidget(labelImage, 2, 4, 1, 1);

        labelNom = new QLabel(centralWidget);
        labelNom->setObjectName(QStringLiteral("labelNom"));

        gridLayout->addWidget(labelNom, 0, 4, 1, 1);

        lineEditProduit = new QLineEdit(centralWidget);
        lineEditProduit->setObjectName(QStringLiteral("lineEditProduit"));

        gridLayout->addWidget(lineEditProduit, 0, 5, 1, 1);

        pushButtonType = new QPushButton(centralWidget);
        pushButtonType->setObjectName(QStringLiteral("pushButtonType"));
        pushButtonType->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(pushButtonType, 2, 2, 1, 1);

        comboBoxType = new QComboBox(centralWidget);
        comboBoxType->setObjectName(QStringLiteral("comboBoxType"));

        gridLayout->addWidget(comboBoxType, 2, 1, 1, 1);

        labelRayon = new QLabel(centralWidget);
        labelRayon->setObjectName(QStringLiteral("labelRayon"));

        gridLayout->addWidget(labelRayon, 0, 0, 1, 1);

        labelType = new QLabel(centralWidget);
        labelType->setObjectName(QStringLiteral("labelType"));

        gridLayout->addWidget(labelType, 2, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 0, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 2, 3, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 4, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButtonProduit = new QPushButton(centralWidget);
        pushButtonProduit->setObjectName(QStringLiteral("pushButtonProduit"));
        pushButtonProduit->setEnabled(false);

        horizontalLayout_3->addWidget(pushButtonProduit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        tableWidget->raise();
        labelProduit->raise();
        labelRayon->raise();
        labelType->raise();
        labelNom->raise();
        comboBoxRayon->raise();
        comboBoxType->raise();
        lineEditProduit->raise();
        labelImage->raise();
        labelUM->raise();
        labelDescription->raise();
        comboBoxUM->raise();
        lineEditDescription->raise();
        lineEditImage->raise();
        pushButtonRayon->raise();
        pushButtonType->raise();
        pushButtonProduit->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1178, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Produit", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Rayon", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Type Produit", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Unites Mesure", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Description", 0));
        labelProduit->setText(QApplication::translate("MainWindow", "Produit", 0));
        labelUM->setText(QApplication::translate("MainWindow", "Unites Mesure", 0));
        labelDescription->setText(QApplication::translate("MainWindow", "Description", 0));
        pushButtonRayon->setText(QApplication::translate("MainWindow", "...", 0));
        labelImage->setText(QApplication::translate("MainWindow", "Image", 0));
        labelNom->setText(QApplication::translate("MainWindow", "Nom", 0));
        pushButtonType->setText(QApplication::translate("MainWindow", "...", 0));
        labelRayon->setText(QApplication::translate("MainWindow", "Rayon", 0));
        labelType->setText(QApplication::translate("MainWindow", "Type", 0));
        pushButtonProduit->setText(QApplication::translate("MainWindow", "Ajouter Produit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
