/********************************************************************************
** Form generated from reading UI file 'alinanuruntablosu.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALINANURUNTABLOSU_H
#define UI_ALINANURUNTABLOSU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_alinanuruntablosu
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *alinanuruntablosu)
    {
        if (alinanuruntablosu->objectName().isEmpty())
            alinanuruntablosu->setObjectName(QStringLiteral("alinanuruntablosu"));
        alinanuruntablosu->resize(535, 270);
        alinanuruntablosu->setMinimumSize(QSize(535, 270));
        alinanuruntablosu->setMaximumSize(QSize(535, 270));
        tableWidget = new QTableWidget(alinanuruntablosu);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 511, 251));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setColumnCount(5);

        retranslateUi(alinanuruntablosu);

        QMetaObject::connectSlotsByName(alinanuruntablosu);
    } // setupUi

    void retranslateUi(QDialog *alinanuruntablosu)
    {
        alinanuruntablosu->setWindowTitle(QApplication::translate("alinanuruntablosu", "Al\304\261nan \303\234r\303\274n Tablosu", 0));
    } // retranslateUi

};

namespace Ui {
    class alinanuruntablosu: public Ui_alinanuruntablosu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALINANURUNTABLOSU_H
