/********************************************************************************
** Form generated from reading UI file 'urunguncelle.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_URUNGUNCELLE_H
#define UI_URUNGUNCELLE_H

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

class Ui_urunguncelle
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *edtUrunKodu;
    QLineEdit *edtUrunAdi;
    QLineEdit *edtBirimFiyati;
    QLineEdit *edtOlcuBirimi;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnKaydet;
    QPushButton *btnVazgec;

    void setupUi(QDialog *urunguncelle)
    {
        if (urunguncelle->objectName().isEmpty())
            urunguncelle->setObjectName(QStringLiteral("urunguncelle"));
        urunguncelle->resize(279, 160);
        urunguncelle->setMinimumSize(QSize(279, 160));
        urunguncelle->setMaximumSize(QSize(279, 160));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/win_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        urunguncelle->setWindowIcon(icon);
        layoutWidget = new QWidget(urunguncelle);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 261, 141));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        edtUrunKodu = new QLineEdit(layoutWidget);
        edtUrunKodu->setObjectName(QStringLiteral("edtUrunKodu"));
        edtUrunKodu->setReadOnly(true);

        verticalLayout->addWidget(edtUrunKodu);

        edtUrunAdi = new QLineEdit(layoutWidget);
        edtUrunAdi->setObjectName(QStringLiteral("edtUrunAdi"));

        verticalLayout->addWidget(edtUrunAdi);

        edtBirimFiyati = new QLineEdit(layoutWidget);
        edtBirimFiyati->setObjectName(QStringLiteral("edtBirimFiyati"));

        verticalLayout->addWidget(edtBirimFiyati);

        edtOlcuBirimi = new QLineEdit(layoutWidget);
        edtOlcuBirimi->setObjectName(QStringLiteral("edtOlcuBirimi"));

        verticalLayout->addWidget(edtOlcuBirimi);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnKaydet = new QPushButton(layoutWidget);
        btnKaydet->setObjectName(QStringLiteral("btnKaydet"));
        btnKaydet->setFont(font);

        horizontalLayout->addWidget(btnKaydet);

        btnVazgec = new QPushButton(layoutWidget);
        btnVazgec->setObjectName(QStringLiteral("btnVazgec"));
        btnVazgec->setFont(font);

        horizontalLayout->addWidget(btnVazgec);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(urunguncelle);

        QMetaObject::connectSlotsByName(urunguncelle);
    } // setupUi

    void retranslateUi(QDialog *urunguncelle)
    {
        urunguncelle->setWindowTitle(QApplication::translate("urunguncelle", "\303\234r\303\274n G\303\274ncelle", 0));
        label->setText(QApplication::translate("urunguncelle", "\303\234r\303\274n Kodu", 0));
        label_2->setText(QApplication::translate("urunguncelle", "\303\234r\303\274n Ad\304\261", 0));
        label_3->setText(QApplication::translate("urunguncelle", "Birim Fiyat\304\261", 0));
        label_4->setText(QApplication::translate("urunguncelle", "\303\226l\303\247\303\274 Birimi", 0));
        btnKaydet->setText(QApplication::translate("urunguncelle", "Kaydet", 0));
        btnVazgec->setText(QApplication::translate("urunguncelle", "Vazge\303\247", 0));
    } // retranslateUi

};

namespace Ui {
    class urunguncelle: public Ui_urunguncelle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_URUNGUNCELLE_H
