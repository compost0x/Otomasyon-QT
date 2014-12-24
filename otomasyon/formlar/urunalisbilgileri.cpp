#include "urunalisbilgileri.h"
#include "ui_urunalisbilgileri.h"

urunalisbilgileri::urunalisbilgileri(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::urunalisbilgileri)
{
    ui->setupUi(this);
}

urunalisbilgileri::~urunalisbilgileri()
{
    delete ui;
}

void urunalisbilgileri::setVeritabani(veritabani *vt)
{
    if(su_ptrveritabani != vt){
        su_ptrveritabani = vt;
    }

}

void urunalisbilgileri::setAlisYap(ptrUrunVeri apasUrun)
{
    if(su_ptrurunalis != apasUrun){
        su_ptrurunalis = apasUrun;
    }
    ui->edtAlinanMusteriKodu->setText(su_ptrurunalis->musteriKodu());
    ui->edtAlinanUrunKodu->setText(su_ptrurunalis->urunKodu());
    ui->edtAlinanUrunAlisMiktari->setText(su_ptrurunalis->urunAlisMiktari());
    ui->dateAlinanAlisTarihi->setDate(su_ptrurunalis->urunAlisTarihi());
    ui->edtAlinanBirimFiyati->setText(su_ptrurunalis->birimFiyati());
}

void urunalisbilgileri::on_pushButton_2_clicked()
{


      if(su_ptrveritabani->numarayaGoreUrunBul(ui->edtAlinanUrunKodu->text())==NULL){
        QMessageBox::critical(this,
                              "Ürün Kodu Yanlış",
                              "Veritabanında kayıtlı ürün bulunamadı veya boş ürün kodu girdiniz. Kayıt iptal edildi.");

        return;
      }
      else if(su_ptrveritabani->numarayaGoreMusteriBul(ui->edtAlinanMusteriKodu->text())==NULL){
          QMessageBox::critical(this,
                                 "Müşteri Kodu Yanlış",
                                "Veritabanında kayıtlı müşteri bulunamadı veya boş müşteri kodu girdiniz. Kayıt iptal edildi.");

          return;
      }



    su_ptrurunalis->setUrunKodu(ui->edtAlinanUrunKodu->text());
    su_ptrurunalis->setMusteriKodu(ui->edtAlinanMusteriKodu->text());
    su_ptrurunalis->setUrunAlisMiktari(ui->edtAlinanUrunAlisMiktari->text());
    su_ptrurunalis->setUrunAlisTarihi(ui->dateAlinanAlisTarihi->date());
    su_ptrurunalis->setBirimFiyati(ui->edtAlinanBirimFiyati->text());

    su_ptrveritabani->urunAlis(su_ptrurunalis);

    su_ptrurunalis->setToplamAlisFiyati(ui->edtAlinanBirimFiyati->text().toDouble()*ui->edtAlinanUrunAlisMiktari->text().toDouble());


    setAlisYap(new urunverileri);

    ui->edtAlinanUrunKodu->setFocus();
}

void urunalisbilgileri::on_pushButton_3_clicked()
{
    alinanuruntablosu form;
    form.setVeritabani(su_ptrveritabani);
    form.exec();
}

void urunalisbilgileri::on_pushButton_clicked()
{
    QString total;
    double hesapla,birim,miktar;

    birim = ui->edtAlinanBirimFiyati->text().toDouble();
    miktar = ui->edtAlinanUrunAlisMiktari->text().toDouble();
    hesapla = birim*miktar;
    total = "%1    ₺";

    ui->label_8->setText(total.arg(hesapla));
}
