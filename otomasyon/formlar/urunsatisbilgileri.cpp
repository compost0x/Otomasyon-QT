#include "urunsatisbilgileri.h"
#include "ui_urunsatisbilgileri.h"

urunsatisbilgileri::urunsatisbilgileri(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::urunsatisbilgileri)
{
    ui->setupUi(this);

}

urunsatisbilgileri::~urunsatisbilgileri()
{
    delete ui;

}

void urunsatisbilgileri::setVeritabani(veritabani *vt)
{
    if(su_ptrveritabani != vt){
        su_ptrveritabani = vt;
    }
}

void urunsatisbilgileri::setSatisYap(ptrUrunVeri apasUrun)
{
    if(su_ptrurunsatis != apasUrun){
        su_ptrurunsatis = apasUrun;
    }

    ui->edtSatilanUrunKodu->setText(su_ptrurunsatis->urunKodu());
    ui->edtSatilanMusteriKodu->setText(su_ptrurunsatis->musteriKodu());
    ui->edtSatilanUrunSatisMiktari->setText(su_ptrurunsatis->urunSatisMiktari());
    ui->dateSatilanSatisTarihi->setDate(su_ptrurunsatis->urunSatisTarihi());
    ui->edtSatilanBirimFiyati->setText(su_ptrurunsatis->birimFiyati());
}


void urunsatisbilgileri::on_pushButton_2_clicked()

{
   ptrUrunVeri aramaSonucu = su_ptrveritabani->numarayaGoreUrunBul(ui->edtSatilanUrunKodu->text());
    if(aramaSonucu==NULL){
        QMessageBox::critical(this,
                              "Ürün Kodu Yanlış",
                              "Veritabanında kayıtlı ürün bulunamadı veya boş ürün kodu girdiniz. Kayıt iptal edildi.");
        return;
    }

        else if(su_ptrveritabani->numarayaGoreMusteriBul(ui->edtSatilanMusteriKodu->text())==NULL){
            QMessageBox::critical(this,
                                "Müşteri Kodu Yanlış",
                                "Veritabanında kayıtlı müşteri bulunamadı veya boş müşteri kodu girdiniz. Kayıt iptal edildi.");

            return;
        }

   su_ptrurunsatis->setUrunKodu(ui->edtSatilanUrunKodu->text());
   su_ptrurunsatis->setMusteriKodu(ui->edtSatilanMusteriKodu->text());
   su_ptrurunsatis->setUrunSatisMiktari(ui->edtSatilanUrunSatisMiktari->text());
   su_ptrurunsatis->setUrunSatisTarihi(ui->dateSatilanSatisTarihi->date());
   su_ptrurunsatis->setBirimFiyati(ui->edtSatilanBirimFiyati->text());

   su_ptrveritabani->urunSatis(su_ptrurunsatis);

   su_ptrurunsatis->setToplamSatisFiyati(ui->edtSatilanBirimFiyati->text().toDouble()*ui->edtSatilanUrunSatisMiktari->text().toDouble());

   setSatisYap(new urunverileri);

   ui->edtSatilanUrunKodu->setFocus();

}



void urunsatisbilgileri::on_pushButton_3_clicked()
{
    satilanuruntablosu form;

    form.setVeritabani(su_ptrveritabani);
    form.exec();
}


void urunsatisbilgileri::on_pushButton_clicked()
{
    QString total;
    double hesapla,birim,miktar;

    birim = ui->edtSatilanBirimFiyati->text().toDouble();
    miktar = ui->edtSatilanUrunSatisMiktari->text().toDouble();
    hesapla = (birim*miktar)+((birim*miktar)*18/100);
    total = "%1    ₺";

    ui->label_8->setText(total.arg(hesapla));
}
