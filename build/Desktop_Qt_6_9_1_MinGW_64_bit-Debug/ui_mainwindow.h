/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditId;
    QLabel *label_2;
    QLineEdit *lineEditClass;
    QLabel *label_3;
    QLineEdit *lineEditName;
    QLabel *label_4;
    QLineEdit *lineEditPhone;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnImport;
    QPushButton *btnAdd;
    QPushButton *btnExport;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 550);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        lineEditId = new QLineEdit(centralwidget);
        lineEditId->setObjectName("lineEditId");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lineEditId);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        lineEditClass = new QLineEdit(centralwidget);
        lineEditClass->setObjectName("lineEditClass");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, lineEditClass);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        lineEditName = new QLineEdit(centralwidget);
        lineEditName->setObjectName("lineEditName");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, lineEditName);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        lineEditPhone = new QLineEdit(centralwidget);
        lineEditPhone->setObjectName("lineEditPhone");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, lineEditPhone);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(158, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnImport = new QPushButton(centralwidget);
        btnImport->setObjectName("btnImport");

        horizontalLayout->addWidget(btnImport);

        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");

        horizontalLayout->addWidget(btnAdd);

        btnExport = new QPushButton(centralwidget);
        btnExport->setObjectName("btnExport");

        horizontalLayout->addWidget(btnExport);

        horizontalSpacer_2 = new QSpacerItem(248, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        tableWidget->raise();
        btnExport->raise();
        btnImport->raise();
        lineEditId->raise();
        lineEditClass->raise();
        lineEditName->raise();
        lineEditPhone->raise();
        btnAdd->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        lineEditId->raise();
        lineEditClass->raise();
        lineEditName->raise();
        btnExport->raise();
        btnImport->raise();
        btnAdd->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 700, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\345\255\270\350\231\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\264\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\351\233\273\350\251\261", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\255\270\350\231\237:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\264\232:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\351\233\273\350\251\261:", nullptr));
        btnImport->setText(QCoreApplication::translate("MainWindow", "\345\214\257\345\205\245", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236", nullptr));
        btnExport->setText(QCoreApplication::translate("MainWindow", "\345\214\257\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
