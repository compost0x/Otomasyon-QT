#include "urunguncelle.h"
#include "ui_urunguncelle.h"
#include "QMessageBox"
urunguncelle::urunguncelle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::urunguncelle)
{
    ui->setupUi(this);
}

urunguncelle::~urunguncelle()
{
    delete ui;
}

void urunguncelle::setVeritabani(veritabani *yeniVt)
{
    if(su_ptrveritabani!=yeniVt){
        su_ptrveritabani=yeniVt;
    }
}
void urunguncelle::on_btnKaydet_clicked()
{
    QMessageBox::information(this,
                          "Başarılı",
                          "Ürün güncellendi. Lütfen tabloyu kapatıp açınız.");

    su_ptrurunveri->setUrunAdi(ui->edtUrunAdi->text());
    su_ptrurunveri->setBirimFiyati(ui->edtBirimFiyati->text());
    su_ptrurunveri->setOlcuBirimi(ui->edtOlcuBirimi->text());

    accept();
}

void urunguncelle::ekranaAktar()
{
    ui->edtUrunKodu->setText(su_ptrurunveri->urunKodu());
    ui->edtUrunAdi->setText(su_ptrurunveri->urunAdi());
    ui->edtBirimFiyati->setText(su_ptrurunveri->birimFiyati());
    ui->edtOlcuBirimi->setText(su_ptrurunveri->olcuBirimi());
}
void urunguncelle::setUrun(ptrUrunVeri yeniUrun)
{
    if(su_ptrurunveri != yeniUrun){
        su_ptrurunveri = yeniUrun;


        //Ekrana Aktaralım
        ekranaAktar();

}
}

void urunguncelle::on_btnVazgec_clicked()
{
    reject();
}
