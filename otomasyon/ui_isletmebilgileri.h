/********************************************************************************
** Form generated from reading UI file 'isletmebilgileri.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISLETMEBILGILERI_H
#define UI_ISLETMEBILGILERI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_isletmebilgileri
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *isletmebilgileri)
    {
        if (isletmebilgileri->objectName().isEmpty())
            isletmebilgileri->setObjectName(QStringLiteral("isletmebilgileri"));
        isletmebilgileri->resize(400, 327);
        isletmebilgileri->setMinimumSize(QSize(400, 327));
        isletmebilgileri->setMaximumSize(QSize(400, 327));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/win_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        isletmebilgileri->setWindowIcon(icon);
        isletmebilgileri->setStyleSheet(QStringLiteral("image: url(:/icons/isletme_icon.png);"));
        pushButton = new QPushButton(isletmebilgileri);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(10, 290, 381, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);

        retranslateUi(isletmebilgileri);

        QMetaObject::connectSlotsByName(isletmebilgileri);
    } // setupUi

    void retranslateUi(QDialog *isletmebilgileri)
    {
        isletmebilgileri->setWindowTitle(QApplication::translate("isletmebilgileri", "\304\260\305\237letme Bilgileri", 0));
        pushButton->setText(QApplication::translate("isletmebilgileri", "\304\260\305\237letme Muhasebe D\303\266k\303\274m\303\274n\303\274 G\303\266rmek \304\260\303\247in T\304\261klay\304\261n\304\261z", 0));
    } // retranslateUi

};

namespace Ui {
    class isletmebilgileri: public Ui_isletmebilgileri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISLETMEBILGILERI_H
