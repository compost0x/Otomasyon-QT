#include "yeniurunkayit.h"
#include "satilanurunbilgileri.h"
#include "ui_yeniurunkayit.h"
#include <QMessageBox>
yeniurunkayit::yeniurunkayit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::yeniurunkayit)
{
    ui->setupUi(this);

}

yeniurunkayit::~yeniurunkayit()
{
    delete ui;
}

void yeniurunkayit::setVeritabani(veritabani *vt)
{
    if(su_ptrveritabani != vt){
        su_ptrveritabani = vt;
    }
}

void yeniurunkayit::setUrunkayit(ptrUrunVeri urunadd)
{
    if(su_ptrurunveri != urunadd){
        su_ptrurunveri = urunadd;
    }

    ui->edtUrunKod->setText(su_ptrurunveri->urunKodu());
    ui->edtUrunAdi->setText(su_ptrurunveri->urunAdi());
    ui->edtOlcuBirimi->setText(su_ptrurunveri->olcuBirimi());
    ui->edtBirimFiyat->setText(su_ptrurunveri->birimFiyati());
}

void yeniurunkayit::on_btnKaydet_clicked()
{
    ptrUrunVeri aramaSonucu = su_ptrveritabani->numarayaGoreUrunBul(ui->edtUrunKod->text());
    if(aramaSonucu!=NULL){
        QMessageBox::critical(this,
                              "Ürün Kodu Yanlış",
                              "Aynı koda sahip başka ürün var. Kayıt iptal edildi.");
        return;
    }
    else{
        if(ui->edtUrunKod->text()!="" && ui->edtUrunAdi->text()!="" && ui->edtOlcuBirimi->text()!="" && ui->edtBirimFiyat->text()!=""){

    su_ptrurunveri->setUrunKodu(ui->edtUrunKod->text());
    su_ptrurunveri->setUrunAdi(ui->edtUrunAdi->text());
    su_ptrurunveri->setOlcuBirimi(ui->edtOlcuBirimi->text());
    su_ptrurunveri->setBirimFiyati(ui->edtBirimFiyat->text());


    su_ptrveritabani->urunEkle(su_ptrurunveri);

    setUrunkayit(new urunverileri);

    ui->edtUrunKod->setFocus();
}
    else{
        QMessageBox::critical(this,
                              "Ürün Kayıt Hatalı",
                              "Lütfen bütün bilgileri doldurun. Kayıt iptal edildi.");
    }
    }
}



void yeniurunkayit::on_btnVazgec_clicked()
{
    reject();
}
