/********************************************************************************
** Form generated from reading UI file 'muhasebedokumu.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUHASEBEDOKUMU_H
#define UI_MUHASEBEDOKUMU_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_muhasebedokumu
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateEdit *dateEdit_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_2;
    QLabel *toplamAlinan;
    QLabel *toplamSatilan;
    QLabel *karZarar;
    QLabel *donemKdv;

    void setupUi(QDialog *muhasebedokumu)
    {
        if (muhasebedokumu->objectName().isEmpty())
            muhasebedokumu->setObjectName(QStringLiteral("muhasebedokumu"));
        muhasebedokumu->resize(400, 253);
        muhasebedokumu->setMinimumSize(QSize(400, 253));
        muhasebedokumu->setMaximumSize(QSize(400, 253));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/win_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        muhasebedokumu->setWindowIcon(icon);
        pushButton = new QPushButton(muhasebedokumu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 90, 361, 41));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/hesap_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(25, 25));
        layoutWidget = new QWidget(muhasebedokumu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 361, 22));
        layoutWidget->setFont(font);
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setFont(font);
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2014, 1, 1));

        horizontalLayout->addWidget(dateEdit);

        layoutWidget1 = new QWidget(muhasebedokumu);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 50, 361, 22));
        layoutWidget1->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        dateEdit_2 = new QDateEdit(layoutWidget1);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setFont(font);
        dateEdit_2->setCalendarPopup(true);
        dateEdit_2->setDate(QDate(2014, 1, 1));

        horizontalLayout_2->addWidget(dateEdit_2);

        layoutWidget2 = new QWidget(muhasebedokumu);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 140, 361, 91));
        layoutWidget2->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        verticalLayout->addWidget(label_9);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        toplamAlinan = new QLabel(layoutWidget2);
        toplamAlinan->setObjectName(QStringLiteral("toplamAlinan"));
        toplamAlinan->setFont(font);

        verticalLayout_2->addWidget(toplamAlinan);

        toplamSatilan = new QLabel(layoutWidget2);
        toplamSatilan->setObjectName(QStringLiteral("toplamSatilan"));
        toplamSatilan->setFont(font);

        verticalLayout_2->addWidget(toplamSatilan);

        karZarar = new QLabel(layoutWidget2);
        karZarar->setObjectName(QStringLiteral("karZarar"));
        karZarar->setFont(font);

        verticalLayout_2->addWidget(karZarar);

        donemKdv = new QLabel(layoutWidget2);
        donemKdv->setObjectName(QStringLiteral("donemKdv"));
        donemKdv->setFont(font);

        verticalLayout_2->addWidget(donemKdv);


        horizontalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(muhasebedokumu);

        QMetaObject::connectSlotsByName(muhasebedokumu);
    } // setupUi

    void retranslateUi(QDialog *muhasebedokumu)
    {
        muhasebedokumu->setWindowTitle(QApplication::translate("muhasebedokumu", "Muhasebe D\303\266k\303\274m\303\274", 0));
        pushButton->setText(QApplication::translate("muhasebedokumu", "D\303\266k\303\274m\303\274 Hesapla", 0));
        label->setText(QApplication::translate("muhasebedokumu", "Ba\305\237lang\304\261\303\247", 0));
        label_2->setText(QApplication::translate("muhasebedokumu", "Biti\305\237", 0));
        label_3->setText(QApplication::translate("muhasebedokumu", "Toplam Al\304\261nan \303\234r\303\274n Fiyat\304\261 :", 0));
        label_5->setText(QApplication::translate("muhasebedokumu", "Toplam Sat\304\261lan \303\234r\303\274n Fiyat\304\261 :", 0));
        label_7->setText(QApplication::translate("muhasebedokumu", "Kar-Zarar Durumu :", 0));
        label_9->setText(QApplication::translate("muhasebedokumu", "D\303\266nem K.D.V. :", 0));
        toplamAlinan->setText(QString());
        toplamSatilan->setText(QString());
        karZarar->setText(QString());
        donemKdv->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class muhasebedokumu: public Ui_muhasebedokumu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUHASEBEDOKUMU_H
