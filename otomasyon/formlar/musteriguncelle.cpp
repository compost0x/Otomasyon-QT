#include "musteriguncelle.h"
#include "ui_musteriguncelle.h"
#include <QMessageBox>
musteriguncelle::musteriguncelle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::musteriguncelle)
{
    ui->setupUi(this);
}

musteriguncelle::~musteriguncelle()
{
    delete ui;
}

void musteriguncelle::setVeritabani(veritabani *yeniVt)
{
    if(su_ptrveritabani!=yeniVt){
        su_ptrveritabani=yeniVt;
    }
}

void musteriguncelle::on_btnKaydet_clicked()
{
    if(ui->edtMusteriAdi->text()!="" && ui->edtMusteriAdresi->text()!="" && ui->edtMusteriSoyadi->text()!=""){
    QMessageBox::information(this,
                          "Başarılı",
                          "Müşteri güncellendi. Lütfen tabloyu kapatıp açınız.");
    su_ptrmusteriveri->setMusteriAdi(ui->edtMusteriAdi->text());
    su_ptrmusteriveri->setMusteriSoyadi(ui->edtMusteriSoyadi->text());
    su_ptrmusteriveri->setMusteriAdresi(ui->edtMusteriAdresi->text());

    accept();
}
    else{
        QMessageBox::critical(this,
                              "Müşteri Güncelleme Hatalı",
                              "Lütfen bütün bilgileri doldurun. Kayıt iptal edildi.");
    }
}
void musteriguncelle::on_btnVazgec_clicked()
{
    reject();
}



void musteriguncelle::ekranaAktar()
{
    ui->edtMusteriKodu->setText(su_ptrmusteriveri->musteriKodu());
    ui->edtMusteriAdi->setText(su_ptrmusteriveri->musteriAdi());
    ui->edtMusteriSoyadi->setText(su_ptrmusteriveri->musteriSoyadi());
    ui->edtMusteriAdresi->setText(su_ptrmusteriveri->musteriAdresi());
}

void musteriguncelle::setMusteri(ptrMusteriVeri yeniMusteri)
{
    if(su_ptrmusteriveri != yeniMusteri){
        su_ptrmusteriveri = yeniMusteri;


        //Ekrana Aktaralım
        ekranaAktar();

    }
}
