/********************************************************************************
** Form generated from reading UI file 'musteribilgileri.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSTERIBILGILERI_H
#define UI_MUSTERIBILGILERI_H

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

class Ui_musteribilgileri
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *MusteriAdi;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *MusteriSoyadi;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *MusteriAdresi;

    void setupUi(QDialog *musteribilgileri)
    {
        if (musteribilgileri->objectName().isEmpty())
            musteribilgileri->setObjectName(QStringLiteral("musteribilgileri"));
        musteribilgileri->resize(400, 300);
        musteribilgileri->setMinimumSize(QSize(400, 300));
        musteribilgileri->setMaximumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/win_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        musteribilgileri->setWindowIcon(icon);
        pushButton = new QPushButton(musteribilgileri);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 200, 381, 41));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/kayit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(25, 25));
        pushButton_2 = new QPushButton(musteribilgileri);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 250, 381, 41));
        pushButton_2->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/table_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(25, 25));
        layoutWidget = new QWidget(musteribilgileri);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 381, 181));
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
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/search_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        MusteriAdi = new QLabel(layoutWidget);
        MusteriAdi->setObjectName(QStringLiteral("MusteriAdi"));
        MusteriAdi->setFont(font);

        horizontalLayout_2->addWidget(MusteriAdi);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        MusteriSoyadi = new QLabel(layoutWidget);
        MusteriSoyadi->setObjectName(QStringLiteral("MusteriSoyadi"));
        MusteriSoyadi->setFont(font);

        horizontalLayout_3->addWidget(MusteriSoyadi);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        MusteriAdresi = new QLabel(layoutWidget);
        MusteriAdresi->setObjectName(QStringLiteral("MusteriAdresi"));
        MusteriAdresi->setFont(font);

        horizontalLayout_4->addWidget(MusteriAdresi);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(musteribilgileri);

        QMetaObject::connectSlotsByName(musteribilgileri);
    } // setupUi

    void retranslateUi(QDialog *musteribilgileri)
    {
        musteribilgileri->setWindowTitle(QApplication::translate("musteribilgileri", "M\303\274\305\237teri Bilgileri", 0));
        pushButton->setText(QApplication::translate("musteribilgileri", "Yeni M\303\274\305\237teri Kayd\304\261 \304\260\303\247in T\304\261klay\304\261n\304\261z", 0));
        pushButton_2->setText(QApplication::translate("musteribilgileri", "Mevcut M\303\274\305\237teri Tablosunu G\303\266rmek \304\260\303\247in T\304\261klay\304\261n\304\261z", 0));
        label->setText(QApplication::translate("musteribilgileri", "M\303\274\305\237teri Kodu :  ", 0));
        pushButton_3->setText(QApplication::translate("musteribilgileri", "ARA", 0));
        label_2->setText(QApplication::translate("musteribilgileri", "M\303\274\305\237teri Ad\304\261 :", 0));
        MusteriAdi->setText(QString());
        label_3->setText(QApplication::translate("musteribilgileri", "M\303\274\305\237teri Soyad\304\261 :", 0));
        MusteriSoyadi->setText(QString());
        label_4->setText(QApplication::translate("musteribilgileri", "M\303\274\305\237teri Adresi :", 0));
        MusteriAdresi->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class musteribilgileri: public Ui_musteribilgileri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSTERIBILGILERI_H
