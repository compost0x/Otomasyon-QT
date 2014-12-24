#include "muhasebedokumu.h"
#include "ui_muhasebedokumu.h"

muhasebedokumu::muhasebedokumu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::muhasebedokumu)
{
    ui->setupUi(this);
}

muhasebedokumu::~muhasebedokumu()
{
    delete ui;
}

void muhasebedokumu::setVeritabani(veritabani *vt)
{
    if(su_ptrveritabani!=vt){
        su_ptrveritabani=vt;
    }
}

void muhasebedokumu::on_pushButton_clicked()
{
    QString mesajA= "%1   ₺";
    QString mesajB= "%1   ₺";
    QString mesajC= "%1   ₺";
    QString mesajD= "%1   ₺";

    satilanUrunListesi satilanListe;
    alinanUrunListesi alinanListe;

    double kdv,karZarar;

    satilanListe = su_ptrveritabani->satilanUrunlerAralikAramasi(ui->dateEdit->date(),ui->dateEdit_2->date());
    alinanListe = su_ptrveritabani->alinanUrunlerAralikAramasi(ui->dateEdit->date(),ui->dateEdit_2->date());
    karZarar = (su_ptrveritabani->satilanUrunler(satilanListe))-(su_ptrveritabani->alinanUrunler(alinanListe));
    kdv = (su_ptrveritabani->satilanUrunler(satilanListe))*0.18;

    ui->toplamAlinan->setText(mesajA.arg(su_ptrveritabani->alinanUrunler(alinanListe)));
    ui->toplamSatilan->setText(mesajB.arg(su_ptrveritabani->satilanUrunler(satilanListe)));
    ui->karZarar->setText(mesajC.arg(karZarar));
    ui->donemKdv->setText(mesajD.arg(kdv));


}


