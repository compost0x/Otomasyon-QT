#ifndef YENIURUNKAYIT_H
#define YENIURUNKAYIT_H

#include <QDialog>
#include "veriler/veritabani.h"
#include "formlar/satilanurunbilgileri.h"
namespace Ui {
class yeniurunkayit;
}

class yeniurunkayit : public QDialog
{
    Q_OBJECT

public:
    explicit yeniurunkayit(QWidget *parent = 0);
    ~yeniurunkayit();

    void setVeritabani(veritabani *vt);
    void setUrunkayit(ptrUrunVeri urunadd);

private slots:
    void on_btnKaydet_clicked();

    void on_btnVazgec_clicked();

private:
    Ui::yeniurunkayit *ui;

    veritabani *su_ptrveritabani;
    ptrUrunVeri su_ptrurunveri;
};

#endif // YENIURUNKAYIT_H
