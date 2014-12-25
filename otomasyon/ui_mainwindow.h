/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(667, 471);
        MainWindow->setMinimumSize(QSize(667, 471));
        MainWindow->setMaximumSize(QSize(667, 471));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/win_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/icons/lizard_main_icon.png);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 651, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(1, 20));
        pushButton_4->setMaximumSize(QSize(650, 60));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_4->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/musteri_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(1, 20));
        pushButton_3->setMaximumSize(QSize(650, 60));
        pushButton_3->setFont(font);
        pushButton_3->setLayoutDirection(Qt::LeftToRight);
        pushButton_3->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/kasa_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(1, 20));
        pushButton->setMaximumSize(QSize(650, 60));
        pushButton->setFont(font);
        pushButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/buy_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(32, 32));
        pushButton->setAutoRepeat(false);
        pushButton->setAutoExclusive(false);
        pushButton->setDefault(false);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(1, 20));
        pushButton_2->setMaximumSize(QSize(650, 60));
        pushButton_2->setFont(font);
        pushButton_2->setLayoutDirection(Qt::LeftToRight);
        pushButton_2->setAutoFillBackground(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/sell_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(1, 20));
        pushButton_5->setMaximumSize(QSize(650, 60));
        pushButton_5->setFont(font);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/isyeri_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon5);
        pushButton_5->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setEnabled(true);
        pushButton_6->setMinimumSize(QSize(1, 20));
        pushButton_6->setMaximumSize(QSize(650, 60));
        pushButton_6->setFont(font);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/help_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon6);
        pushButton_6->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 300, 151, 111));
        pushButton_7->setFont(font);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/kayit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon7);
        pushButton_7->setIconSize(QSize(32, 32));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 667, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LizardGate \304\260\305\237yeri Otomasyonu", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "M\303\274\305\237teri Bilgileri", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Sat\304\261lan \303\234r\303\274n Bilgileri", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\303\234r\303\274n Al\304\261\305\237 Bilgileri", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\303\234r\303\274n Sat\304\261\305\237 Bilgileri", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "\304\260\305\237letme Bilgileri", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "YARDIM", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Verileri \n"
"Kaydet", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
