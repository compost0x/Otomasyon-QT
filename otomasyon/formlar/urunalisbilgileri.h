#ifndef URUNALISBILGILERI_H
#define URUNALISBILGILERI_H

#include <QDialog>
#include "veriler/veritabani.h"
#include "formlar/alinanuruntablosu.h"
#include <QMessageBox>

//#include "veriler/urunverileri.h"
namespace Ui {
class urunalisbilgileri;
}

class urunalisbilgileri : public QDialog
{
    Q_OBJECT

public:
    explicit urunalisbilgileri(QWidget *parent = 0);
    ~urunalisbilgileri();

    void setVeritabani(veritabani *vt);
    void setAlisYap(ptrUrunVeri apasUrun);
   // void setMusteriAlisYap(ptrMusteriVeri apasMusteri);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::urunalisbilgileri *ui;

    veritabani *su_ptrveritabani;
    ptrUrunVeri su_ptrurunalis;
    //ptrMusteriVeri su_ptrmusterialis;
};

#endif // URUNALISBILGILERI_H
