#ifndef YENIMUSTERIKAYIT_H
#define YENIMUSTERIKAYIT_H

#include <QDialog>
#include "veriler/veritabani.h"
#include "formlar/musteribilgileri.h"
namespace Ui {
class yenimusterikayit;
}

class yenimusterikayit : public QDialog
{
    Q_OBJECT

public:
    explicit yenimusterikayit(QWidget *parent = 0);
    ~yenimusterikayit();
    void setVeritabani(veritabani *vt);
    void setMusterikayit(ptrMusteriVeri mustadd);
private slots:
    void on_btnKaydet_clicked();

    void on_btnVazgec_clicked();


private:
    Ui::yenimusterikayit *ui;
    veritabani *su_ptrveritabani;
    ptrMusteriVeri su_ptrmusteriveri;

};

#endif // YENIMUSTERIKAYIT_H
