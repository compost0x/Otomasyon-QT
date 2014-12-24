#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <veriler/veritabani.h>

#include "formlar/isletmebilgileri.h"
#include "formlar/mevcutmusteri.h"
#include "formlar/mevcuturun.h"
#include "formlar/muhasebedokumu.h"
#include "formlar/musteribilgileri.h"
#include "formlar/satilanurunbilgileri.h"
#include "formlar/urunalisbilgileri.h"
#include "formlar/urunsatisbilgileri.h"
#include "formlar/yenimusterikayit.h"
#include "formlar/yeniurunkayit.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected :
//    void closeEvent(QCloseEvent *olay);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();
    void on_pushButton_7_clicked();

private:

    isletmebilgileri isletmeBilgileri;
    muhasebedokumu muhasebeDokumu;
    musteribilgileri musteriBilgileri;
    satilanurunbilgileri satilanUrunBilgileri;
    urunalisbilgileri urunAlisBilgileri;
    urunsatisbilgileri urunSatisBilgileri;

    Ui::MainWindow *ui;

    veritabani *su_ptrveritabani;

};

#endif // MAINWINDOW_H
