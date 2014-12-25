/********************************************************************************
** Form generated from reading UI file 'yenimusterikayit.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YENIMUSTERIKAYIT_H
#define UI_YENIMUSTERIKAYIT_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_yenimusterikayit
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
    QVBoxLayout *verticalLayout_2;
    QLineEdit *edtMusteriKod;
    QLineEdit *edtMusteriAd;
    QLineEdit *edtMusteriSoyad;
    QLineEdit *edtMusteriAdres;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnKaydet;
    QPushButton *btnVazgec;

    void setupUi(QDialog *yenimusterikayit)
    {
        if (yenimusterikayit->objectName().isEmpty())
            yenimusterikayit->setObjectName(QStringLiteral("yenimusterikayit"));
        yenimusterikayit->resize(312, 156);
        yenimusterikayit->setMinimumSize(QSize(312, 156));
        yenimusterikayit->setMaximumSize(QSize(312, 156));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/win_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        yenimusterikayit->setWindowIcon(icon);
        layoutWidget = new QWidget(yenimusterikayit);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 291, 136));
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


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        edtMusteriKod = new QLineEdit(layoutWidget);
        edtMusteriKod->setObjectName(QStringLiteral("edtMusteriKod"));

        verticalLayout_2->addWidget(edtMusteriKod);

        edtMusteriAd = new QLineEdit(layoutWidget);
        edtMusteriAd->setObjectName(QStringLiteral("edtMusteriAd"));

        verticalLayout_2->addWidget(edtMusteriAd);

        edtMusteriSoyad = new QLineEdit(layoutWidget);
        edtMusteriSoyad->setObjectName(QStringLiteral("edtMusteriSoyad"));

        verticalLayout_2->addWidget(edtMusteriSoyad);

        edtMusteriAdres = new QLineEdit(layoutWidget);
        edtMusteriAdres->setObjectName(QStringLiteral("edtMusteriAdres"));

        verticalLayout_2->addWidget(edtMusteriAdres);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnKaydet = new QPushButton(layoutWidget);
        btnKaydet->setObjectName(QStringLiteral("btnKaydet"));
        btnKaydet->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/save_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnKaydet->setIcon(icon1);
        btnKaydet->setAutoDefault(false);

        horizontalLayout_2->addWidget(btnKaydet);

        btnVazgec = new QPushButton(layoutWidget);
        btnVazgec->setObjectName(QStringLiteral("btnVazgec"));
        btnVazgec->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/close_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnVazgec->setIcon(icon2);
        btnVazgec->setAutoDefault(false);

        horizontalLayout_2->addWidget(btnVazgec);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(yenimusterikayit);

        QMetaObject::connectSlotsByName(yenimusterikayit);
    } // setupUi

    void retranslateUi(QDialog *yenimusterikayit)
    {
        yenimusterikayit->setWindowTitle(QApplication::translate("yenimusterikayit", "Yeni M\303\274\305\237teri Kay\304\261t", 0));
        label->setText(QApplication::translate("yenimusterikayit", "M\303\274\305\237teri Kodu :", 0));
        label_2->setText(QApplication::translate("yenimusterikayit", "M\303\274\305\237teri Ad\304\261 :", 0));
        label_3->setText(QApplication::translate("yenimusterikayit", "M\303\274\305\237teri Soyad\304\261 :", 0));
        label_4->setText(QApplication::translate("yenimusterikayit", "M\303\274\305\237teri Adresi :", 0));
        btnKaydet->setText(QApplication::translate("yenimusterikayit", "Kaydet", 0));
        btnVazgec->setText(QApplication::translate("yenimusterikayit", "Vazge\303\247", 0));
    } // retranslateUi

};

namespace Ui {
    class yenimusterikayit: public Ui_yenimusterikayit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YENIMUSTERIKAYIT_H
