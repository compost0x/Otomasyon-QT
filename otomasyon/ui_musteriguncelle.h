/********************************************************************************
** Form generated from reading UI file 'musteriguncelle.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSTERIGUNCELLE_H
#define UI_MUSTERIGUNCELLE_H

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

class Ui_musteriguncelle
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
    QLineEdit *edtMusteriKodu;
    QLineEdit *edtMusteriAdi;
    QLineEdit *edtMusteriSoyadi;
    QLineEdit *edtMusteriAdresi;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnKaydet;
    QPushButton *btnVazgec;

    void setupUi(QDialog *musteriguncelle)
    {
        if (musteriguncelle->objectName().isEmpty())
            musteriguncelle->setObjectName(QStringLiteral("musteriguncelle"));
        musteriguncelle->resize(283, 162);
        musteriguncelle->setMinimumSize(QSize(283, 162));
        musteriguncelle->setMaximumSize(QSize(283, 162));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/win_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        musteriguncelle->setWindowIcon(icon);
        layoutWidget = new QWidget(musteriguncelle);
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
        edtMusteriKodu = new QLineEdit(layoutWidget);
        edtMusteriKodu->setObjectName(QStringLiteral("edtMusteriKodu"));
        edtMusteriKodu->setReadOnly(true);

        verticalLayout->addWidget(edtMusteriKodu);

        edtMusteriAdi = new QLineEdit(layoutWidget);
        edtMusteriAdi->setObjectName(QStringLiteral("edtMusteriAdi"));

        verticalLayout->addWidget(edtMusteriAdi);

        edtMusteriSoyadi = new QLineEdit(layoutWidget);
        edtMusteriSoyadi->setObjectName(QStringLiteral("edtMusteriSoyadi"));

        verticalLayout->addWidget(edtMusteriSoyadi);

        edtMusteriAdresi = new QLineEdit(layoutWidget);
        edtMusteriAdresi->setObjectName(QStringLiteral("edtMusteriAdresi"));

        verticalLayout->addWidget(edtMusteriAdresi);


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


        retranslateUi(musteriguncelle);

        QMetaObject::connectSlotsByName(musteriguncelle);
    } // setupUi

    void retranslateUi(QDialog *musteriguncelle)
    {
        musteriguncelle->setWindowTitle(QApplication::translate("musteriguncelle", "M\303\274\305\237teri G\303\274ncelle", 0));
        label->setText(QApplication::translate("musteriguncelle", "M\303\274\305\237teri Kodu", 0));
        label_2->setText(QApplication::translate("musteriguncelle", "M\303\274\305\237teri Ad\304\261", 0));
        label_3->setText(QApplication::translate("musteriguncelle", "M\303\274\305\237teri Soyad\304\261", 0));
        label_4->setText(QApplication::translate("musteriguncelle", "M\303\274\305\237teri Adresi", 0));
        btnKaydet->setText(QApplication::translate("musteriguncelle", "Kaydet", 0));
        btnVazgec->setText(QApplication::translate("musteriguncelle", "Vazge\303\247", 0));
    } // retranslateUi

};

namespace Ui {
    class musteriguncelle: public Ui_musteriguncelle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSTERIGUNCELLE_H
