/********************************************************************************
** Form generated from reading UI file 'urunsatisbilgileri.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_URUNSATISBILGILERI_H
#define UI_URUNSATISBILGILERI_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_urunsatisbilgileri
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *edtSatilanUrunKodu;
    QLineEdit *edtSatilanMusteriKodu;
    QLineEdit *edtSatilanUrunSatisMiktari;
    QDateEdit *dateSatilanSatisTarihi;
    QLineEdit *edtSatilanBirimFiyati;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *urunsatisbilgileri)
    {
        if (urunsatisbilgileri->objectName().isEmpty())
            urunsatisbilgileri->setObjectName(QStringLiteral("urunsatisbilgileri"));
        urunsatisbilgileri->resize(400, 311);
        urunsatisbilgileri->setMinimumSize(QSize(400, 311));
        urunsatisbilgileri->setMaximumSize(QSize(400, 311));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/win_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        urunsatisbilgileri->setWindowIcon(icon);
        layoutWidget = new QWidget(urunsatisbilgileri);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 381, 291));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        edtSatilanUrunKodu = new QLineEdit(layoutWidget);
        edtSatilanUrunKodu->setObjectName(QStringLiteral("edtSatilanUrunKodu"));

        verticalLayout_2->addWidget(edtSatilanUrunKodu);

        edtSatilanMusteriKodu = new QLineEdit(layoutWidget);
        edtSatilanMusteriKodu->setObjectName(QStringLiteral("edtSatilanMusteriKodu"));

        verticalLayout_2->addWidget(edtSatilanMusteriKodu);

        edtSatilanUrunSatisMiktari = new QLineEdit(layoutWidget);
        edtSatilanUrunSatisMiktari->setObjectName(QStringLiteral("edtSatilanUrunSatisMiktari"));

        verticalLayout_2->addWidget(edtSatilanUrunSatisMiktari);

        dateSatilanSatisTarihi = new QDateEdit(layoutWidget);
        dateSatilanSatisTarihi->setObjectName(QStringLiteral("dateSatilanSatisTarihi"));
        dateSatilanSatisTarihi->setDate(QDate(2014, 1, 1));

        verticalLayout_2->addWidget(dateSatilanSatisTarihi);

        edtSatilanBirimFiyati = new QLineEdit(layoutWidget);
        edtSatilanBirimFiyati->setObjectName(QStringLiteral("edtSatilanBirimFiyati"));

        verticalLayout_2->addWidget(edtSatilanBirimFiyati);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(1, 30));
        pushButton->setMaximumSize(QSize(380, 50));
        pushButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/hesap_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(25, 25));

        verticalLayout_3->addWidget(pushButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        horizontalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_8->setFont(font1);

        horizontalLayout_2->addWidget(label_8);


        verticalLayout_3->addLayout(horizontalLayout_2);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(1, 30));
        pushButton_2->setMaximumSize(QSize(380, 50));
        pushButton_2->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/ok_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(25, 25));

        verticalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(1, 30));
        pushButton_3->setMaximumSize(QSize(380, 50));
        pushButton_3->setFont(font);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/table_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(25, 25));

        verticalLayout_3->addWidget(pushButton_3);


        retranslateUi(urunsatisbilgileri);

        QMetaObject::connectSlotsByName(urunsatisbilgileri);
    } // setupUi

    void retranslateUi(QDialog *urunsatisbilgileri)
    {
        urunsatisbilgileri->setWindowTitle(QApplication::translate("urunsatisbilgileri", "\303\234r\303\274n Sat\304\261\305\237 Bilgileri", 0));
        label->setText(QApplication::translate("urunsatisbilgileri", "\303\234r\303\274n Kodu :", 0));
        label_2->setText(QApplication::translate("urunsatisbilgileri", "M\303\274\305\237teri Kodu :", 0));
        label_3->setText(QApplication::translate("urunsatisbilgileri", "\303\234r\303\274n Sat\304\261\305\237 Miktar\304\261 :", 0));
        label_4->setText(QApplication::translate("urunsatisbilgileri", "Sat\304\261\305\237 Tarihi :", 0));
        label_5->setText(QApplication::translate("urunsatisbilgileri", "Birim Fiyat\304\261 :", 0));
        pushButton->setText(QApplication::translate("urunsatisbilgileri", "HESAPLA", 0));
        label_7->setText(QApplication::translate("urunsatisbilgileri", "Toplam Fiyat", 0));
        label_8->setText(QString());
        pushButton_2->setText(QApplication::translate("urunsatisbilgileri", "SATI\305\236 YAP", 0));
        pushButton_3->setText(QApplication::translate("urunsatisbilgileri", "Sat\304\261lan \303\234r\303\274nleri G\303\266rmek \304\260\303\247in T\304\261klay\304\261n\304\261z", 0));
    } // retranslateUi

};

namespace Ui {
    class urunsatisbilgileri: public Ui_urunsatisbilgileri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_URUNSATISBILGILERI_H
