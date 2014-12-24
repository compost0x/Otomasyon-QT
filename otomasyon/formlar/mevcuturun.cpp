#include "mevcuturun.h"
#include "ui_mevcuturun.h"
#include <QTableWidgetItem>
#include <QStringList>
#include <QMessageBox>
mevcuturun::mevcuturun(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mevcuturun)
{
    ui->setupUi(this);
}

mevcuturun::~mevcuturun()
{
    delete ui;
}

void mevcuturun::tabloGuncelle(urunListesi liste)
{
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(liste.count());

    QStringList sutunBasliklari;
    sutunBasliklari.append("Ürün Kodu");
    sutunBasliklari.append("Ürün Adı");
    sutunBasliklari.append("Ölçü Birimi");
    sutunBasliklari.append("Birim Fiyatı");

    ui->tableWidget->setHorizontalHeaderLabels(sutunBasliklari);

    for(int i=0;i<liste.count();i++){
        QTableWidgetItem *noHucresi = new QTableWidgetItem;
        noHucresi->setText(liste[i]->urunKodu());
        ui->tableWidget->setItem(i,0,noHucresi);

        QTableWidgetItem *adHucresi = new QTableWidgetItem;
        adHucresi->setText(liste[i]->urunAdi());
        ui->tableWidget->setItem(i,1, adHucresi);

        QTableWidgetItem *birimHucresi = new QTableWidgetItem;
        birimHucresi->setText(liste[i]->olcuBirimi());
        ui->tableWidget->setItem(i,2,birimHucresi);

        QTableWidgetItem *fiyatHucresi = new QTableWidgetItem;
        fiyatHucresi->setText(liste[i]->birimFiyati());
        ui->tableWidget->setItem(i,3,fiyatHucresi);
    }
}

void mevcuturun::setVeritabani(veritabani *vt)
{
    if(su_ptrveritabani!=vt){
        su_ptrveritabani = vt;

        // Table widget'a bilgi aktarımı
        urunListesi liste = su_ptrveritabani->urunler();
        tabloGuncelle(liste);
    }
}

void mevcuturun::on_pushButton_clicked()
{
    int index=ui->tableWidget->currentRow();
    ptrUrunVeri arananMusteri = su_ptrveritabani->numarayaGoreUrunBul(su_ptrveritabani->urunler().at(index)->urunKodu());
    urunguncelle form;
    setVeritabani(su_ptrveritabani);
    form.setUrun(arananMusteri);
    form.exec();
}

