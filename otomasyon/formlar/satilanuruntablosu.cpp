#include "satilanuruntablosu.h"
#include "ui_satilanuruntablosu.h"
#include <QTableWidgetItem>
#include <QStringList>
satilanuruntablosu::satilanuruntablosu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::satilanuruntablosu)
{
    ui->setupUi(this);
}

satilanuruntablosu::~satilanuruntablosu()
{
    delete ui;
}

void satilanuruntablosu::setVeritabani(veritabani *vt)
{

    if(su_ptrveritabani!=vt){
        su_ptrveritabani = vt;

        //Table Widget'a bilgi aktarımı

        satilanUrunListesi liste = su_ptrveritabani->satilanUrunler();
        ui->tableWidget->setRowCount(liste.count());

        QStringList sutunBasliklari;
        sutunBasliklari.append("Ürün Kodu");
        sutunBasliklari.append("Müşteri Kodu");
        sutunBasliklari.append("Ürün Satış Miktarı");
        sutunBasliklari.append("Satış Tarihi");
        sutunBasliklari.append("Birim Fiyatı");

        ui->tableWidget->setHorizontalHeaderLabels(sutunBasliklari);

        for(int i=0;i<liste.count();i++){
            QTableWidgetItem *noHucresi = new QTableWidgetItem;
            noHucresi->setText(liste[i]->urunKodu());
            ui->tableWidget->setItem(i,0,noHucresi);

            QTableWidgetItem *kodHucresi = new QTableWidgetItem;
            kodHucresi->setText(liste[i]->musteriKodu());
            ui->tableWidget->setItem(i,1,kodHucresi);

            QTableWidgetItem *miktarHucresi = new QTableWidgetItem;
            miktarHucresi->setText(liste[i]->urunSatisMiktari());
            ui->tableWidget->setItem(i,2,miktarHucresi);

            QTableWidgetItem *tarihHucresi = new QTableWidgetItem;
            tarihHucresi->setText(liste[i]->urunSatisTarihi().toString());
            ui->tableWidget->setItem(i,3,tarihHucresi);

            QTableWidgetItem *birimHucresi = new QTableWidgetItem;
            birimHucresi->setText(liste[i]->birimFiyati());
            ui->tableWidget->setItem(i,4,birimHucresi);
        }
    }
}

