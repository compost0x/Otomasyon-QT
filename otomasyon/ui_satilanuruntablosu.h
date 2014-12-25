/********************************************************************************
** Form generated from reading UI file 'satilanuruntablosu.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATILANURUNTABLOSU_H
#define UI_SATILANURUNTABLOSU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_satilanuruntablosu
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *satilanuruntablosu)
    {
        if (satilanuruntablosu->objectName().isEmpty())
            satilanuruntablosu->setObjectName(QStringLiteral("satilanuruntablosu"));
        satilanuruntablosu->resize(581, 285);
        satilanuruntablosu->setMinimumSize(QSize(581, 285));
        satilanuruntablosu->setMaximumSize(QSize(581, 285));
        tableWidget = new QTableWidget(satilanuruntablosu);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 561, 261));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setColumnCount(5);

        retranslateUi(satilanuruntablosu);

        QMetaObject::connectSlotsByName(satilanuruntablosu);
    } // setupUi

    void retranslateUi(QDialog *satilanuruntablosu)
    {
        satilanuruntablosu->setWindowTitle(QApplication::translate("satilanuruntablosu", " Sat\304\261lan \303\234r\303\274n Tablosu", 0));
    } // retranslateUi

};

namespace Ui {
    class satilanuruntablosu: public Ui_satilanuruntablosu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATILANURUNTABLOSU_H
