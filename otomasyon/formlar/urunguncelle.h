#ifndef URUNGUNCELLE_H
#define URUNGUNCELLE_H
#include "veriler/veritabani.h"
#include <QDialog>

namespace Ui {
class urunguncelle;
}

class urunguncelle : public QDialog
{
    Q_OBJECT

public:
    explicit urunguncelle(QWidget *parent = 0);
    ~urunguncelle();
    void setVeritabani(veritabani *yeniVt);
    void setUrun(ptrUrunVeri yeniUrun);
    void ekranaAktar();
private slots:
    void on_btnKaydet_clicked();

    void on_btnVazgec_clicked();

private:
    Ui::urunguncelle *ui;
    veritabani *su_ptrveritabani;
    ptrUrunVeri su_ptrurunveri;
};

#endif // URUNGUNCELLE_H
