#include "musteribilgileri.h"
#include "mevcutmusteri.h"
#include "veriler/musteriverileri.h"
#include "ui_musteribilgileri.h"
#include "QMessageBox"

musteribilgileri::musteribilgileri(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::musteribilgileri)
{
    ui->setupUi(this);
   // su_ptrveritabani = new veritabani;
}

musteribilgileri::~musteribilgileri()
{
    delete ui;
}

void musteribilgileri::on_pushButton_clicked()
{
    yenimusterikayit form;

    form.setVeritabani(su_ptrveritabani);
    ptrMusteriVeri yeniMusteriKayiti = new musteriverileri;
    form.setMusterikayit(yeniMusteriKayiti);
    form.exec();

}

void musteribilgileri::on_pushButton_2_clicked()
{
    mevcutmusteri form;

    form.setVeritabani(su_ptrveritabani);
    form.exec();
}

void musteribilgileri::setVeritabani(veritabani *vt)
{
    if(su_ptrveritabani!=vt){
        su_ptrveritabani=vt;
    }
}

void musteribilgileri::on_pushButton_3_clicked()
{
    ptrMusteriVeri aramaSonucu = su_ptrveritabani->numarayaGoreMusteriBul(ui->lineEdit->text());
    if(aramaSonucu==NULL){
        QMessageBox::critical(this,
                              "Müşteri Kodu Yanlış",
                              "Aynı koda sahip müşteri yok veya boş değer girdiniz. Kayıt iptal edildi.");
        return;
    }


    musteriverileri *arananmusteri=su_ptrveritabani->numarayaGoreMusteriBul(ui->lineEdit->text());

    ui->MusteriAdi->setText(arananmusteri->musteriAdi());
    ui->MusteriSoyadi->setText(arananmusteri->musteriSoyadi());
    ui->MusteriAdresi->setText(arananmusteri->musteriAdresi());

}
