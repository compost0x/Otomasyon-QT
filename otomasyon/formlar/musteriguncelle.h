#ifndef MUSTERIGUNCELLE_H
#define MUSTERIGUNCELLE_H

#include <QDialog>
#include "veriler/veritabani.h"

namespace Ui {
class musteriguncelle;
}

class musteriguncelle : public QDialog
{
    Q_OBJECT

public:
    explicit musteriguncelle(QWidget *parent = 0);
    ~musteriguncelle();


    void setVeritabani(veritabani *yeniVt);
    void setMusteri(ptrMusteriVeri yeniMusteri);
    void ekranaAktar();
private slots:
    void on_btnKaydet_clicked();

    void on_btnVazgec_clicked();




private:
    Ui::musteriguncelle *ui;
    veritabani *su_ptrveritabani;
    ptrMusteriVeri su_ptrmusteriveri;
};

#endif // MUSTERIGUNCELLE_H
