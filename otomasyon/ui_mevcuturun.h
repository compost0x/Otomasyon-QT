/********************************************************************************
** Form generated from reading UI file 'mevcuturun.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEVCUTURUN_H
#define UI_MEVCUTURUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_mevcuturun
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *mevcuturun)
    {
        if (mevcuturun->objectName().isEmpty())
            mevcuturun->setObjectName(QStringLiteral("mevcuturun"));
        mevcuturun->resize(433, 330);
        mevcuturun->setMinimumSize(QSize(433, 330));
        mevcuturun->setMaximumSize(QSize(433, 330));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/win_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        mevcuturun->setWindowIcon(icon);
        tableWidget = new QTableWidget(mevcuturun);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 411, 271));
        tableWidget->setMinimumSize(QSize(411, 271));
        tableWidget->setMaximumSize(QSize(411, 271));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setColumnCount(4);
        pushButton = new QPushButton(mevcuturun);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 290, 411, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);

        retranslateUi(mevcuturun);

        QMetaObject::connectSlotsByName(mevcuturun);
    } // setupUi

    void retranslateUi(QDialog *mevcuturun)
    {
        mevcuturun->setWindowTitle(QApplication::translate("mevcuturun", "Mevcut \303\234r\303\274nler", 0));
        pushButton->setText(QApplication::translate("mevcuturun", "G\303\274ncelle", 0));
    } // retranslateUi

};

namespace Ui {
    class mevcuturun: public Ui_mevcuturun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEVCUTURUN_H
