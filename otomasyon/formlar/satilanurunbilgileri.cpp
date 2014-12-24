#include "satilanurunbilgileri.h"
#include "ui_satilanurunbilgileri.h"
#include "veriler/veritabani.h"
#include "formlar/yeniurunkayit.h"
//#include "mainwindow.h"
#include <QMessageBox>
#include <QLabel>
satilanurunbilgileri::satilanurunbilgileri(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::satilanurunbilgileri)
{
    ui->setupUi(this);
    //su_ptrveritabani = new veritabani;
}

satilanurunbilgileri::~satilanurunbilgileri()
{
    delete ui;
}

void satilanurunbilgileri::setVeritabani(veritabani *vt)
{
    if(su_ptrveritabani!=vt){
        su_ptrveritabani=vt;
    }
}

void satilanurunbilgileri::on_pushButton_clicked()
{
    yeniurunkayit form;
    form.setVeritabani(su_ptrveritabani);
    ptrUrunVeri yeniUrunKayiti = new urunverileri;
    form.setUrunkayit(yeniUrunKayiti);
    form.exec();
}

void satilanurunbilgileri::on_pushButton_2_clicked()
{
    mevcuturun form;
    form.setVeritabani(su_ptrveritabani);
    form.exec();
}

void satilanurunbilgileri::on_pushButton_3_clicked()
{
    ptrUrunVeri aramaSonucu = su_ptrveritabani->numarayaGoreUrunBul(ui->lineEdit->text());
    if(aramaSonucu==NULL){
        QMessageBox::critical(this,
                              "Ürün Kodu Yanlış",
                              "Aynı koda sahip ürün yok veya boş değer girdiniz. Kayıt iptal edildi.");
        return;
    }
    urunverileri *arananurun=su_ptrveritabani->numarayaGoreUrunBul(ui->lineEdit->text());

    ui->urunAdi->setText(arananurun->urunAdi());
    ui->olcuBirimi->setText(arananurun->olcuBirimi());
    ui->birimFiyati->setText(arananurun->birimFiyati());
}

