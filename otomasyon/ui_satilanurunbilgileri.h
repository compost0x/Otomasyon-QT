/********************************************************************************
** Form generated from reading UI file 'satilanurunbilgileri.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATILANURUNBILGILERI_H
#define UI_SATILANURUNBILGILERI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_satilanurunbilgileri
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *urunAdi;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *olcuBirimi;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *birimFiyati;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *satilanurunbilgileri)
    {
        if (satilanurunbilgileri->objectName().isEmpty())
            satilanurunbilgileri->setObjectName(QStringLiteral("satilanurunbilgileri"));
        satilanurunbilgileri->resize(400, 300);
        satilanurunbilgileri->setMinimumSize(QSize(400, 300));
        satilanurunbilgileri->setMaximumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/win_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        satilanurunbilgileri->setWindowIcon(icon);
        layoutWidget = new QWidget(satilanurunbilgileri);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 381, 181));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        layoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font);

        horizontalLayout->addWidget(lineEdit);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/search_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        urunAdi = new QLabel(layoutWidget);
        urunAdi->setObjectName(QStringLiteral("urunAdi"));
        urunAdi->setFont(font);

        horizontalLayout_2->addWidget(urunAdi);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        olcuBirimi = new QLabel(layoutWidget);
        olcuBirimi->setObjectName(QStringLiteral("olcuBirimi"));
        olcuBirimi->setFont(font);

        horizontalLayout_3->addWidget(olcuBirimi);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        birimFiyati = new QLabel(layoutWidget);
        birimFiyati->setObjectName(QStringLiteral("birimFiyati"));
        birimFiyati->setFont(font);

        horizontalLayout_4->addWidget(birimFiyati);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton = new QPushButton(satilanurunbilgileri);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 200, 381, 41));
        pushButton->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/kayit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(25, 25));
        pushButton_2 = new QPushButton(satilanurunbilgileri);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 250, 381, 41));
        pushButton_2->setFont(font);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/table_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);
        pushButton_2->setIconSize(QSize(25, 25));

        retranslateUi(satilanurunbilgileri);

        QMetaObject::connectSlotsByName(satilanurunbilgileri);
    } // setupUi

    void retranslateUi(QDialog *satilanurunbilgileri)
    {
        satilanurunbilgileri->setWindowTitle(QApplication::translate("satilanurunbilgileri", "Sat\304\261lan \303\234r\303\274n Bilgileri", 0));
        label->setText(QApplication::translate("satilanurunbilgileri", "\303\234r\303\274n Kodu :  ", 0));
        pushButton_3->setText(QApplication::translate("satilanurunbilgileri", "ARA", 0));
        label_2->setText(QApplication::translate("satilanurunbilgileri", "\303\234r\303\274n Ad\304\261 :", 0));
        urunAdi->setText(QString());
        label_3->setText(QApplication::translate("satilanurunbilgileri", "\303\226l\303\247\303\274 Birimi :", 0));
        olcuBirimi->setText(QString());
        label_4->setText(QApplication::translate("satilanurunbilgileri", "Birim Fiyat\304\261 :", 0));
        birimFiyati->setText(QString());
        pushButton->setText(QApplication::translate("satilanurunbilgileri", "Yeni \303\234r\303\274n Kayd\304\261 \304\260\303\247in T\304\261klay\304\261n\304\261z", 0));
        pushButton_2->setText(QApplication::translate("satilanurunbilgileri", "Mevcut \303\234r\303\274n Tablosunu G\303\266rmek \304\260\303\247in T\304\261klay\304\261n\304\261z", 0));
    } // retranslateUi

};

namespace Ui {
    class satilanurunbilgileri: public Ui_satilanurunbilgileri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATILANURUNBILGILERI_H
