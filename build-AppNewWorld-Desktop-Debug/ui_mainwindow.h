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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Ouvrir;
    QAction *action_Savaugarder;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidgetProduit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelProduit;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_8;
    QLabel *labelImage;
    QLabel *labelUM;
    QLabel *labelDescription;
    QComboBox *comboBoxUM;
    QComboBox *comboBoxRayon;
    QLineEdit *lineEditImage;
    QLineEdit *lineEditDescription;
    QPushButton *pushButtonRayon;
    QLabel *labelNom;
    QComboBox *comboBoxType;
    QPushButton *pushButtonType;
    QLabel *labelRayon;
    QLabel *labelType;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_9;
    QComboBox *comboBoxCategorie;
    QPushButton *pushButtonCategorie;
    QLabel *labelleImage;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonProduit;
    QSpacerItem *horizontalSpacer_6;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidgetProduit_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_13;
    QLabel *labelProduit_2;
    QSpacerItem *horizontalSpacer_14;
    QGridLayout *gridLayout_2;
    QLabel *labelUM_2;
    QLabel *labelDescription_2;
    QSpacerItem *horizontalSpacer_15;
    QLabel *labelImage_2;
    QLabel *labelRayon_2;
    QComboBox *comboBoxType_2;
    QComboBox *comboBoxUM_2;
    QLabel *labelNom_2;
    QComboBox *comboBoxRayon_2;
    QLineEdit *lineEditImage_2;
    QComboBox *comboBoxCategorie_2;
    QLabel *labelType_2;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QLineEdit *lineEditDescription_2;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButtonProduit_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushBoutonModifier;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *pushButtonGestSupprimer;
    QSpacerItem *horizontalSpacer_11;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QTableWidget *tableWidgetProduc;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *pushButtonValidProduc;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *pushButtonRefus;
    QSpacerItem *horizontalSpacer_22;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1071, 734);
        action_Ouvrir = new QAction(MainWindow);
        action_Ouvrir->setObjectName(QStringLiteral("action_Ouvrir"));
        action_Savaugarder = new QAction(MainWindow);
        action_Savaugarder->setObjectName(QStringLiteral("action_Savaugarder"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 650));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableWidgetProduit = new QTableWidget(tab);
        if (tableWidgetProduit->columnCount() < 5)
            tableWidgetProduit->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidgetProduit->setObjectName(QStringLiteral("tableWidgetProduit"));
        tableWidgetProduit->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetProduit->setDragDropOverwriteMode(false);
        tableWidgetProduit->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetProduit->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetProduit->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidgetProduit->horizontalHeader()->setDefaultSectionSize(230);
        tableWidgetProduit->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableWidgetProduit);

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

        labelProduit = new QLabel(tab);
        labelProduit->setObjectName(QStringLiteral("labelProduit"));

        horizontalLayout->addWidget(labelProduit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 2, 3, 1, 1);

        labelImage = new QLabel(tab);
        labelImage->setObjectName(QStringLiteral("labelImage"));

        gridLayout->addWidget(labelImage, 2, 4, 1, 1);

        labelUM = new QLabel(tab);
        labelUM->setObjectName(QStringLiteral("labelUM"));

        gridLayout->addWidget(labelUM, 5, 0, 1, 1);

        labelDescription = new QLabel(tab);
        labelDescription->setObjectName(QStringLiteral("labelDescription"));

        gridLayout->addWidget(labelDescription, 5, 4, 1, 1);

        comboBoxUM = new QComboBox(tab);
        comboBoxUM->setObjectName(QStringLiteral("comboBoxUM"));

        gridLayout->addWidget(comboBoxUM, 5, 1, 1, 1);

        comboBoxRayon = new QComboBox(tab);
        comboBoxRayon->setObjectName(QStringLiteral("comboBoxRayon"));
        comboBoxRayon->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(comboBoxRayon, 0, 1, 1, 1);

        lineEditImage = new QLineEdit(tab);
        lineEditImage->setObjectName(QStringLiteral("lineEditImage"));

        gridLayout->addWidget(lineEditImage, 2, 5, 1, 1);

        lineEditDescription = new QLineEdit(tab);
        lineEditDescription->setObjectName(QStringLiteral("lineEditDescription"));

        gridLayout->addWidget(lineEditDescription, 5, 5, 1, 1);

        pushButtonRayon = new QPushButton(tab);
        pushButtonRayon->setObjectName(QStringLiteral("pushButtonRayon"));
        pushButtonRayon->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(pushButtonRayon, 0, 2, 1, 1);

        labelNom = new QLabel(tab);
        labelNom->setObjectName(QStringLiteral("labelNom"));

        gridLayout->addWidget(labelNom, 0, 4, 1, 1);

        comboBoxType = new QComboBox(tab);
        comboBoxType->setObjectName(QStringLiteral("comboBoxType"));

        gridLayout->addWidget(comboBoxType, 2, 1, 1, 1);

        pushButtonType = new QPushButton(tab);
        pushButtonType->setObjectName(QStringLiteral("pushButtonType"));
        pushButtonType->setEnabled(false);
        pushButtonType->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(pushButtonType, 2, 2, 1, 1);

        labelRayon = new QLabel(tab);
        labelRayon->setObjectName(QStringLiteral("labelRayon"));

        gridLayout->addWidget(labelRayon, 0, 0, 1, 1);

        labelType = new QLabel(tab);
        labelType->setObjectName(QStringLiteral("labelType"));

        gridLayout->addWidget(labelType, 2, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 0, 3, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 5, 3, 1, 1);

        comboBoxCategorie = new QComboBox(tab);
        comboBoxCategorie->setObjectName(QStringLiteral("comboBoxCategorie"));
        comboBoxCategorie->setMinimumSize(QSize(150, 0));
        comboBoxCategorie->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(comboBoxCategorie, 0, 5, 1, 1);

        pushButtonCategorie = new QPushButton(tab);
        pushButtonCategorie->setObjectName(QStringLiteral("pushButtonCategorie"));
        pushButtonCategorie->setEnabled(true);
        pushButtonCategorie->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(pushButtonCategorie, 0, 6, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        labelleImage = new QLabel(tab);
        labelleImage->setObjectName(QStringLiteral("labelleImage"));
        labelleImage->setMinimumSize(QSize(200, 100));

        horizontalLayout_2->addWidget(labelleImage);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButtonProduit = new QPushButton(tab);
        pushButtonProduit->setObjectName(QStringLiteral("pushButtonProduit"));
        pushButtonProduit->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/usr/share/icons/Adwaita/16x16/emblems/emblem-default.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonProduit->setIcon(icon);

        horizontalLayout_3->addWidget(pushButtonProduit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tableWidgetProduit_2 = new QTableWidget(tab_3);
        if (tableWidgetProduit_2->columnCount() < 5)
            tableWidgetProduit_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetProduit_2->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetProduit_2->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetProduit_2->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetProduit_2->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetProduit_2->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        tableWidgetProduit_2->setObjectName(QStringLiteral("tableWidgetProduit_2"));
        tableWidgetProduit_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetProduit_2->setDragDropOverwriteMode(false);
        tableWidgetProduit_2->setSelectionMode(QAbstractItemView::MultiSelection);
        tableWidgetProduit_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetProduit_2->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidgetProduit_2->horizontalHeader()->setDefaultSectionSize(170);
        tableWidgetProduit_2->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_4->addWidget(tableWidgetProduit_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        labelProduit_2 = new QLabel(tab_3);
        labelProduit_2->setObjectName(QStringLiteral("labelProduit_2"));

        horizontalLayout_6->addWidget(labelProduit_2);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);


        verticalLayout_3->addLayout(horizontalLayout_6);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelUM_2 = new QLabel(tab_3);
        labelUM_2->setObjectName(QStringLiteral("labelUM_2"));

        gridLayout_2->addWidget(labelUM_2, 4, 0, 1, 1);

        labelDescription_2 = new QLabel(tab_3);
        labelDescription_2->setObjectName(QStringLiteral("labelDescription_2"));

        gridLayout_2->addWidget(labelDescription_2, 4, 3, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_15, 2, 2, 1, 1);

        labelImage_2 = new QLabel(tab_3);
        labelImage_2->setObjectName(QStringLiteral("labelImage_2"));

        gridLayout_2->addWidget(labelImage_2, 2, 3, 1, 1);

        labelRayon_2 = new QLabel(tab_3);
        labelRayon_2->setObjectName(QStringLiteral("labelRayon_2"));

        gridLayout_2->addWidget(labelRayon_2, 0, 0, 1, 1);

        comboBoxType_2 = new QComboBox(tab_3);
        comboBoxType_2->setObjectName(QStringLiteral("comboBoxType_2"));

        gridLayout_2->addWidget(comboBoxType_2, 2, 1, 1, 1);

        comboBoxUM_2 = new QComboBox(tab_3);
        comboBoxUM_2->setObjectName(QStringLiteral("comboBoxUM_2"));

        gridLayout_2->addWidget(comboBoxUM_2, 4, 1, 1, 1);

        labelNom_2 = new QLabel(tab_3);
        labelNom_2->setObjectName(QStringLiteral("labelNom_2"));

        gridLayout_2->addWidget(labelNom_2, 0, 3, 1, 1);

        comboBoxRayon_2 = new QComboBox(tab_3);
        comboBoxRayon_2->setObjectName(QStringLiteral("comboBoxRayon_2"));
        comboBoxRayon_2->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(comboBoxRayon_2, 0, 1, 1, 1);

        lineEditImage_2 = new QLineEdit(tab_3);
        lineEditImage_2->setObjectName(QStringLiteral("lineEditImage_2"));

        gridLayout_2->addWidget(lineEditImage_2, 2, 4, 1, 1);

        comboBoxCategorie_2 = new QComboBox(tab_3);
        comboBoxCategorie_2->setObjectName(QStringLiteral("comboBoxCategorie_2"));
        comboBoxCategorie_2->setMinimumSize(QSize(150, 0));
        comboBoxCategorie_2->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(comboBoxCategorie_2, 0, 4, 1, 1);

        labelType_2 = new QLabel(tab_3);
        labelType_2->setObjectName(QStringLiteral("labelType_2"));

        gridLayout_2->addWidget(labelType_2, 2, 0, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_16, 0, 2, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_17, 4, 2, 1, 1);

        lineEditDescription_2 = new QLineEdit(tab_3);
        lineEditDescription_2->setObjectName(QStringLiteral("lineEditDescription_2"));

        gridLayout_2->addWidget(lineEditDescription_2, 4, 4, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_3);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_18);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        pushButtonProduit_2 = new QPushButton(tab_3);
        pushButtonProduit_2->setObjectName(QStringLiteral("pushButtonProduit_2"));
        pushButtonProduit_2->setEnabled(false);
        pushButtonProduit_2->setIcon(icon);

        horizontalLayout_4->addWidget(pushButtonProduit_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        pushBoutonModifier = new QPushButton(tab_3);
        pushBoutonModifier->setObjectName(QStringLiteral("pushBoutonModifier"));
        pushBoutonModifier->setEnabled(false);

        horizontalLayout_4->addWidget(pushBoutonModifier);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_19);

        pushButtonGestSupprimer = new QPushButton(tab_3);
        pushButtonGestSupprimer->setObjectName(QStringLiteral("pushButtonGestSupprimer"));
        pushButtonGestSupprimer->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/usr/share/icons/Adwaita/16x16/actions/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonGestSupprimer->setIcon(icon1);

        horizontalLayout_4->addWidget(pushButtonGestSupprimer);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);


        verticalLayout_4->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_11 = new QVBoxLayout(tab_2);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        tableWidgetProduc = new QTableWidget(tab_2);
        if (tableWidgetProduc->columnCount() < 5)
            tableWidgetProduc->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetProduc->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetProduc->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetProduc->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetProduc->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetProduc->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        tableWidgetProduc->setObjectName(QStringLiteral("tableWidgetProduc"));
        tableWidgetProduc->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetProduc->setShowGrid(true);
        tableWidgetProduc->horizontalHeader()->setDefaultSectionSize(256);
        tableWidgetProduc->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidgetProduc->horizontalHeader()->setStretchLastSection(true);
        tableWidgetProduc->verticalHeader()->setVisible(false);
        tableWidgetProduc->verticalHeader()->setMinimumSectionSize(25);

        verticalLayout_10->addWidget(tableWidgetProduc);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_20);

        pushButtonValidProduc = new QPushButton(tab_2);
        pushButtonValidProduc->setObjectName(QStringLiteral("pushButtonValidProduc"));
        pushButtonValidProduc->setIcon(icon);

        horizontalLayout_13->addWidget(pushButtonValidProduc);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_21);

        pushButtonRefus = new QPushButton(tab_2);
        pushButtonRefus->setObjectName(QStringLiteral("pushButtonRefus"));
        pushButtonRefus->setIcon(icon1);

        horizontalLayout_13->addWidget(pushButtonRefus);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_22);


        verticalLayout_10->addLayout(horizontalLayout_13);


        verticalLayout_11->addLayout(verticalLayout_10);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_5->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1071, 27));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuFichier->addAction(action_Ouvrir);
        menuFichier->addAction(action_Savaugarder);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Application New World", 0));
        action_Ouvrir->setText(QApplication::translate("MainWindow", "&Ouvrir", 0));
        action_Savaugarder->setText(QApplication::translate("MainWindow", "&Sauvegarder", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetProduit->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Produit", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetProduit->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Rayon", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetProduit->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Type Produit", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetProduit->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Unites Mesure", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetProduit->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Description", 0));
        labelProduit->setText(QApplication::translate("MainWindow", "Produit", 0));
        labelImage->setText(QApplication::translate("MainWindow", "Image", 0));
        labelUM->setText(QApplication::translate("MainWindow", "Unites Mesure", 0));
        labelDescription->setText(QApplication::translate("MainWindow", "Description", 0));
        pushButtonRayon->setText(QApplication::translate("MainWindow", "...", 0));
        labelNom->setText(QApplication::translate("MainWindow", "Categorie", 0));
        pushButtonType->setText(QApplication::translate("MainWindow", "...", 0));
        labelRayon->setText(QApplication::translate("MainWindow", "Rayon", 0));
        labelType->setText(QApplication::translate("MainWindow", "Type", 0));
        pushButtonCategorie->setText(QApplication::translate("MainWindow", "...", 0));
        labelleImage->setText(QString());
        pushButtonProduit->setText(QApplication::translate("MainWindow", "Ajouter Produit", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Ajout des produits ", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetProduit_2->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Produit", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetProduit_2->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Rayon", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetProduit_2->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Type Produit", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetProduit_2->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Unites Mesure", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetProduit_2->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Description", 0));
        labelProduit_2->setText(QApplication::translate("MainWindow", "Produit", 0));
        labelUM_2->setText(QApplication::translate("MainWindow", "Unites Mesure", 0));
        labelDescription_2->setText(QApplication::translate("MainWindow", "Description", 0));
        labelImage_2->setText(QApplication::translate("MainWindow", "Image", 0));
        labelRayon_2->setText(QApplication::translate("MainWindow", "Rayon", 0));
        labelNom_2->setText(QApplication::translate("MainWindow", "Categorie", 0));
        labelType_2->setText(QApplication::translate("MainWindow", "Type", 0));
        pushButtonProduit_2->setText(QApplication::translate("MainWindow", "Validation", 0));
        pushBoutonModifier->setText(QApplication::translate("MainWindow", "Modifier", 0));
        pushButtonGestSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Gestion des produits", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetProduc->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Nom", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetProduc->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Prenom", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetProduc->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Adresse", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetProduc->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Mail", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetProduc->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "id", 0));
        pushButtonValidProduc->setText(QApplication::translate("MainWindow", "Validation", 0));
        pushButtonRefus->setText(QApplication::translate("MainWindow", "Refus", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Gestion des utilisateurs", 0));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
