/********************************************************************************
** Form generated from reading UI file 'urunalisbilgileri.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_URUNALISBILGILERI_H
#define UI_URUNALISBILGILERI_H

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

class Ui_urunalisbilgileri
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
    QLineEdit *edtAlinanUrunKodu;
    QLineEdit *edtAlinanMusteriKodu;
    QLineEdit *edtAlinanUrunAlisMiktari;
    QDateEdit *dateAlinanAlisTarihi;
    QLineEdit *edtAlinanBirimFiyati;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *urunalisbilgileri)
    {
        if (urunalisbilgileri->objectName().isEmpty())
            urunalisbilgileri->setObjectName(QStringLiteral("urunalisbilgileri"));
        urunalisbilgileri->resize(400, 311);
        urunalisbilgileri->setMinimumSize(QSize(400, 311));
        urunalisbilgileri->setMaximumSize(QSize(400, 311));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/win_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        urunalisbilgileri->setWindowIcon(icon);
        layoutWidget = new QWidget(urunalisbilgileri);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 382, 291));
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
        edtAlinanUrunKodu = new QLineEdit(layoutWidget);
        edtAlinanUrunKodu->setObjectName(QStringLiteral("edtAlinanUrunKodu"));

        verticalLayout_2->addWidget(edtAlinanUrunKodu);

        edtAlinanMusteriKodu = new QLineEdit(layoutWidget);
        edtAlinanMusteriKodu->setObjectName(QStringLiteral("edtAlinanMusteriKodu"));

        verticalLayout_2->addWidget(edtAlinanMusteriKodu);

        edtAlinanUrunAlisMiktari = new QLineEdit(layoutWidget);
        edtAlinanUrunAlisMiktari->setObjectName(QStringLiteral("edtAlinanUrunAlisMiktari"));

        verticalLayout_2->addWidget(edtAlinanUrunAlisMiktari);

        dateAlinanAlisTarihi = new QDateEdit(layoutWidget);
        dateAlinanAlisTarihi->setObjectName(QStringLiteral("dateAlinanAlisTarihi"));
        dateAlinanAlisTarihi->setEnabled(true);
        dateAlinanAlisTarihi->setWrapping(false);
        dateAlinanAlisTarihi->setFrame(true);
        dateAlinanAlisTarihi->setReadOnly(false);
        dateAlinanAlisTarihi->setProperty("showGroupSeparator", QVariant(false));
        dateAlinanAlisTarihi->setCalendarPopup(true);
        dateAlinanAlisTarihi->setDate(QDate(2014, 1, 1));

        verticalLayout_2->addWidget(dateAlinanAlisTarihi);

        edtAlinanBirimFiyati = new QLineEdit(layoutWidget);
        edtAlinanBirimFiyati->setObjectName(QStringLiteral("edtAlinanBirimFiyati"));

        verticalLayout_2->addWidget(edtAlinanBirimFiyati);


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
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(30);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(380, 35));
        pushButton_3->setFont(font);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/table_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(25, 25));

        verticalLayout_3->addWidget(pushButton_3);


        retranslateUi(urunalisbilgileri);

        QMetaObject::connectSlotsByName(urunalisbilgileri);
    } // setupUi

    void retranslateUi(QDialog *urunalisbilgileri)
    {
        urunalisbilgileri->setWindowTitle(QApplication::translate("urunalisbilgileri", "\303\234r\303\274n Al\304\261\305\237 Bilgileri", 0));
        label->setText(QApplication::translate("urunalisbilgileri", "\303\234r\303\274n Kodu :", 0));
        label_2->setText(QApplication::translate("urunalisbilgileri", "M\303\274\305\237teri Kodu :", 0));
        label_3->setText(QApplication::translate("urunalisbilgileri", "\303\234r\303\274n Al\304\261\305\237 Miktar\304\261 :", 0));
        label_4->setText(QApplication::translate("urunalisbilgileri", "Al\304\261\305\237 Tarihi :", 0));
        label_5->setText(QApplication::translate("urunalisbilgileri", "Birim Fiyat\304\261 :", 0));
        pushButton->setText(QApplication::translate("urunalisbilgileri", "HESAPLA", 0));
        label_7->setText(QApplication::translate("urunalisbilgileri", "Toplam Fiyat", 0));
        label_8->setText(QString());
        pushButton_2->setText(QApplication::translate("urunalisbilgileri", "ALI\305\236 YAP", 0));
        pushButton_3->setText(QApplication::translate("urunalisbilgileri", "Al\304\261nan \303\234r\303\274nleri G\303\266rmek \304\260\303\247in T\304\261klay\304\261n\304\261z", 0));
    } // retranslateUi

};

namespace Ui {
    class urunalisbilgileri: public Ui_urunalisbilgileri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_URUNALISBILGILERI_H
