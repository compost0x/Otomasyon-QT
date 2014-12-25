/********************************************************************************
** Form generated from reading UI file 'mevcutmusteri.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEVCUTMUSTERI_H
#define UI_MEVCUTMUSTERI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_mevcutmusteri
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *mevcutmusteri)
    {
        if (mevcutmusteri->objectName().isEmpty())
            mevcutmusteri->setObjectName(QStringLiteral("mevcutmusteri"));
        mevcutmusteri->setEnabled(true);
        mevcutmusteri->resize(552, 291);
        mevcutmusteri->setMinimumSize(QSize(552, 291));
        mevcutmusteri->setMaximumSize(QSize(552, 291));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/win_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        mevcutmusteri->setWindowIcon(icon);
        tableWidget = new QTableWidget(mevcutmusteri);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 531, 231));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        tableWidget->setFont(font);
        tableWidget->setLineWidth(1);
        tableWidget->setAutoScrollMargin(16);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setColumnCount(4);
        pushButton = new QPushButton(mevcutmusteri);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 250, 531, 31));
        pushButton->setFont(font);

        retranslateUi(mevcutmusteri);

        QMetaObject::connectSlotsByName(mevcutmusteri);
    } // setupUi

    void retranslateUi(QDialog *mevcutmusteri)
    {
        mevcutmusteri->setWindowTitle(QApplication::translate("mevcutmusteri", "Mevcut M\303\274\305\237teriler", 0));
        pushButton->setText(QApplication::translate("mevcutmusteri", "G\303\274ncelle", 0));
    } // retranslateUi

};

namespace Ui {
    class mevcutmusteri: public Ui_mevcutmusteri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEVCUTMUSTERI_H
