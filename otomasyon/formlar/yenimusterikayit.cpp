#include "yenimusterikayit.h"
#include "musteribilgileri.h"
#include "ui_yenimusterikayit.h"
#include "QMessageBox"
yenimusterikayit::yenimusterikayit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::yenimusterikayit)
{
    ui->setupUi(this);
}

yenimusterikayit::~yenimusterikayit()
{
    delete ui;
}

void yenimusterikayit::setVeritabani(veritabani *vt)
{
    if(su_ptrveritabani != vt){
        su_ptrveritabani = vt;
    }
}

void yenimusterikayit::setMusterikayit(ptrMusteriVeri mustadd)
{
    if(su_ptrmusteriveri != mustadd){
        su_ptrmusteriveri = mustadd;

        ui->edtMusteriKod->setText(su_ptrmusteriveri->musteriKodu());
        ui->edtMusteriAd->setText(su_ptrmusteriveri->musteriAdi());
        ui->edtMusteriSoyad->setText(su_ptrmusteriveri->musteriSoyadi());
        ui->edtMusteriAdres->setText(su_ptrmusteriveri->musteriAdresi());
    }
}

void yenimusterikayit::on_btnKaydet_clicked()
{
    ptrMusteriVeri aramaSonucu = su_ptrveritabani->numarayaGoreMusteriBul(ui->edtMusteriKod->text());
    if(aramaSonucu!=NULL){QMessageBox::critical(this,
                                                "Müşteri Kodu Yanlış",
                                                "Aynı koda sahip başka müşteri var. Kayıt iptal edildi.");

        return;
                      }
    else{

    if(ui->edtMusteriKod->text()!="" && ui->edtMusteriAd->text()!="" && ui->edtMusteriAdres->text()!="" && ui->edtMusteriSoyad->text()!=""){



    su_ptrmusteriveri->setMusteriKodu(ui->edtMusteriKod->text());
    su_ptrmusteriveri->setMusteriAdi(ui->edtMusteriAd->text());
    su_ptrmusteriveri->setMusteriSoyadi(ui->edtMusteriSoyad->text());
    su_ptrmusteriveri->setMusteriAdresi(ui->edtMusteriAdres->text());


    su_ptrveritabani->musteriEkle(su_ptrmusteriveri);

    setMusterikayit(new musteriverileri);

    ui->edtMusteriKod->setFocus();
}
    else{
        QMessageBox::critical(this,
                                                        "Müşteri Kayıt Hatalı",
                                                        "Lütfen bütün bilgileri doldurun. Kayıt iptal edildi.");
    }
    }
    }


    //accept();}



void yenimusterikayit::on_btnVazgec_clicked()
{
    reject();
}
