/********************************************************************************
** Form generated from reading UI file 'yeniurunkayit.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YENIURUNKAYIT_H
#define UI_YENIURUNKAYIT_H

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

class Ui_yeniurunkayit
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
    QLineEdit *edtUrunKod;
    QLineEdit *edtUrunAdi;
    QLineEdit *edtBirimFiyat;
    QLineEdit *edtOlcuBirimi;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnKaydet;
    QPushButton *btnVazgec;

    void setupUi(QDialog *yeniurunkayit)
    {
        if (yeniurunkayit->objectName().isEmpty())
            yeniurunkayit->setObjectName(QStringLiteral("yeniurunkayit"));
        yeniurunkayit->resize(312, 156);
        yeniurunkayit->setMinimumSize(QSize(312, 156));
        yeniurunkayit->setMaximumSize(QSize(312, 156));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/win_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        yeniurunkayit->setWindowIcon(icon);
        layoutWidget = new QWidget(yeniurunkayit);
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
        edtUrunKod = new QLineEdit(layoutWidget);
        edtUrunKod->setObjectName(QStringLiteral("edtUrunKod"));
        edtUrunKod->setEnabled(true);
        edtUrunKod->setReadOnly(false);

        verticalLayout_2->addWidget(edtUrunKod);

        edtUrunAdi = new QLineEdit(layoutWidget);
        edtUrunAdi->setObjectName(QStringLiteral("edtUrunAdi"));

        verticalLayout_2->addWidget(edtUrunAdi);

        edtBirimFiyat = new QLineEdit(layoutWidget);
        edtBirimFiyat->setObjectName(QStringLiteral("edtBirimFiyat"));

        verticalLayout_2->addWidget(edtBirimFiyat);

        edtOlcuBirimi = new QLineEdit(layoutWidget);
        edtOlcuBirimi->setObjectName(QStringLiteral("edtOlcuBirimi"));

        verticalLayout_2->addWidget(edtOlcuBirimi);


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


        retranslateUi(yeniurunkayit);

        QMetaObject::connectSlotsByName(yeniurunkayit);
    } // setupUi

    void retranslateUi(QDialog *yeniurunkayit)
    {
        yeniurunkayit->setWindowTitle(QApplication::translate("yeniurunkayit", "Yeni \303\234r\303\274n Kay\304\261t", 0));
        label->setText(QApplication::translate("yeniurunkayit", "\303\234r\303\274n Kodu :", 0));
        label_2->setText(QApplication::translate("yeniurunkayit", "\303\234r\303\274n Ad\304\261 :", 0));
        label_3->setText(QApplication::translate("yeniurunkayit", "Birim Fiyat\304\261 :", 0));
        label_4->setText(QApplication::translate("yeniurunkayit", "\303\226l\303\247\303\274 Birimi :", 0));
        btnKaydet->setText(QApplication::translate("yeniurunkayit", "Kaydet", 0));
        btnVazgec->setText(QApplication::translate("yeniurunkayit", "Vazge\303\247", 0));
    } // retranslateUi

};

namespace Ui {
    class yeniurunkayit: public Ui_yeniurunkayit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YENIURUNKAYIT_H
