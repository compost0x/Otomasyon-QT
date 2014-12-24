#include "alinanuruntablosu.h"
#include "ui_alinanuruntablosu.h"
#include <QTableWidgetItem>
#include <QStringList>
alinanuruntablosu::alinanuruntablosu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::alinanuruntablosu)
{
    ui->setupUi(this);
}

alinanuruntablosu::~alinanuruntablosu()
{
    delete ui;
}

void alinanuruntablosu::setVeritabani(veritabani *vt)
{
    if(su_ptrveritabani!=vt){
        su_ptrveritabani = vt;

        alinanUrunListesi liste = su_ptrveritabani->alinanUrunler();
        ui->tableWidget->setRowCount(liste.count());

        QStringList sutunBasliklari;
        sutunBasliklari.append("Ürün Kodu");
        sutunBasliklari.append("Müşteri Kodu");
        sutunBasliklari.append("Ürün Alış Miktarı");
        sutunBasliklari.append("Alış Tarihi");
        sutunBasliklari.append("Birim Fiyatı");

        ui->tableWidget->setHorizontalHeaderLabels(sutunBasliklari);

        for(int i=0;i<liste.count();i++){
            QTableWidgetItem *alisnoHucresi = new QTableWidgetItem;
            alisnoHucresi->setText(liste[i]->urunKodu());
            ui->tableWidget->setItem(i,0,alisnoHucresi);

            QTableWidgetItem *aliskodHucresi = new QTableWidgetItem;
            aliskodHucresi->setText(liste[i]->musteriKodu());
            ui->tableWidget->setItem(i,1,aliskodHucresi);

            QTableWidgetItem *alismiktarHucresi = new QTableWidgetItem;
            alismiktarHucresi->setText(liste[i]->urunAlisMiktari());
            ui->tableWidget->setItem(i,2,alismiktarHucresi);

            QTableWidgetItem *alistarihHucresi = new QTableWidgetItem;
            alistarihHucresi->setText(liste[i]->urunAlisTarihi().toString());
            ui->tableWidget->setItem(i,3,alistarihHucresi);

            QTableWidgetItem *alisbirimHucresi = new QTableWidgetItem;
            alisbirimHucresi->setText(liste[i]->birimFiyati());
            ui->tableWidget->setItem(i,4,alisbirimHucresi);
        }

    }
}
