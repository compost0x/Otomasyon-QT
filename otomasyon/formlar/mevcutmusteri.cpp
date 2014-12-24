#include "mevcutmusteri.h"
#include "ui_mevcutmusteri.h"
#include <QTableWidgetItem>
#include <QStringList>
#include <QMessageBox>
mevcutmusteri::mevcutmusteri(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mevcutmusteri)
{
    ui->setupUi(this);
}

mevcutmusteri::~mevcutmusteri()
{
    delete ui;
}

void mevcutmusteri::tabloGuncelle(musteriListesi liste)
{
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(liste.count());

    QStringList sutunBasliklari;
    sutunBasliklari.append("Müşteri Kodu");
    sutunBasliklari.append("Müşteri Adı");
    sutunBasliklari.append("Müşteri Soyadı");
    sutunBasliklari.append("Müşteri Adresi");

    ui->tableWidget->setHorizontalHeaderLabels(sutunBasliklari);

    for(int i=0;i<liste.count();i++){
        QTableWidgetItem *noHucresi = new QTableWidgetItem;
        noHucresi->setText(liste[i]->musteriKodu());
        ui->tableWidget->setItem(i,0,noHucresi);

        QTableWidgetItem *adHucresi = new QTableWidgetItem;
        adHucresi->setText(liste[i]->musteriAdi());
        ui->tableWidget->setItem(i,1, adHucresi);

        QTableWidgetItem *soyadHucresi = new QTableWidgetItem;
        soyadHucresi->setText(liste[i]->musteriSoyadi());
        ui->tableWidget->setItem(i,2,soyadHucresi);

        QTableWidgetItem *adresHucresi = new QTableWidgetItem;
        adresHucresi->setText(liste[i]->musteriAdresi());
        ui->tableWidget->setItem(i,3,adresHucresi);
    }
}

void mevcutmusteri::setVeritabani(veritabani *vt)
{
    if(su_ptrveritabani!=vt){
        su_ptrveritabani = vt;

        // Table widget'a bilgi aktarımı
        musteriListesi liste = su_ptrveritabani->musteriler();
        tabloGuncelle(liste);
    }
}

void mevcutmusteri::on_pushButton_clicked()
{
    int index=ui->tableWidget->currentRow();
    ptrMusteriVeri aramaSonucu = su_ptrveritabani->numarayaGoreMusteriBul(su_ptrveritabani->musteriler().at(index)->musteriKodu());
     if(aramaSonucu==NULL){
         QMessageBox::critical(this,
                               "Ürün Kodu Yanlış",
                               "Veritabanında kayıtlı ürün bulunamadı veya boş ürün kodu girdiniz. Kayıt iptal edildi.");
         return;
     }
    ptrMusteriVeri arananMusteri = su_ptrveritabani->numarayaGoreMusteriBul(su_ptrveritabani->musteriler().at(index)->musteriKodu());
    musteriguncelle form;
    setVeritabani(su_ptrveritabani);
    form.setMusteri(arananMusteri);
    form.exec();
}
