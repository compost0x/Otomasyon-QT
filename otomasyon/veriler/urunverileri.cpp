#include "urunverileri.h"

urunverileri::urunverileri()
{

}

urunverileri::~urunverileri()
{

}

QString urunverileri::urunKodu()
{
    return su_strurunKodu;
}

QString urunverileri::urunAdi()
{
    return su_strurunAdi;
}

QString urunverileri::olcuBirimi()
{
    return su_strolcuBirimi;
}

QString urunverileri::musteriKodu()
{
    return su_strmusteriKodu;
}

QString urunverileri::urunAlisMiktari()
{
    return su_strurunAlisMiktari;
}

QString urunverileri::urunSatisMiktari()
{
    return su_strurunSatisMiktari;
}

QDate urunverileri::urunAlisTarihi()
{
    return su_dateurunAlisTarihi;
}

QDate urunverileri::urunSatisTarihi()
{
    return su_dateurunSatisTarihi;
}

QString urunverileri::birimFiyati()
{
    return su_dblbirimFiyati;
}

QString urunverileri::stokDurumu()
{
    return su_dblstokdurumu;
}

double urunverileri::toplamAlisFiyati()
{
    return su_dbltoplamAlisFiyati;
}

double urunverileri::toplamSatisFiyati()
{
    return su_dbltoplamSatisFiyati;
}

void urunverileri::setUrunKodu(QString yeniUrunKodu)
{
    if(yeniUrunKodu!=su_strurunKodu){
        su_strurunKodu = yeniUrunKodu;
    }
}

void urunverileri::setUrunAdi(QString yeniUrunAdi)
{
    if(yeniUrunAdi!=su_strurunAdi){
        su_strurunAdi = yeniUrunAdi;
    }
}

void urunverileri::setOlcuBirimi(QString yeniOlcuBirimi)
{
    if(yeniOlcuBirimi!=su_strolcuBirimi){
        su_strolcuBirimi = yeniOlcuBirimi;
    }
}

void urunverileri::setMusteriKodu(QString yeniMusteriKodu)
{
    if(yeniMusteriKodu!=su_strmusteriKodu){
        su_strmusteriKodu = yeniMusteriKodu;
    }
}

void urunverileri::setUrunAlisMiktari(QString yeniUrunAlisMiktari)
{
    if(yeniUrunAlisMiktari!=su_strurunAlisMiktari){
        su_strurunAlisMiktari = yeniUrunAlisMiktari;
    }
}

void urunverileri::setUrunSatisMiktari(QString yeniUrunSatisMiktari)
{
    if(yeniUrunSatisMiktari!=su_strurunSatisMiktari){
        su_strurunSatisMiktari = yeniUrunSatisMiktari;
    }
}

void urunverileri::setUrunAlisTarihi(QDate yeniUrunAlisTarihi)
{
    if(yeniUrunAlisTarihi!=su_dateurunAlisTarihi){
        su_dateurunAlisTarihi = yeniUrunAlisTarihi;
    }
}

void urunverileri::setUrunSatisTarihi(QDate yeniUrunSatisTarihi)
{
    if(yeniUrunSatisTarihi!=su_dateurunSatisTarihi){
        su_dateurunSatisTarihi = yeniUrunSatisTarihi;
    }
}

void urunverileri::setBirimFiyati(QString yeniBirimFiyati)
{
    if(yeniBirimFiyati!=su_dblbirimFiyati){
        su_dblbirimFiyati = yeniBirimFiyati;
    }
}

void urunverileri::setStokDurumu(QString yeniStokDurumu)
{
    if(yeniStokDurumu!=su_dblstokdurumu){
        su_dblstokdurumu=yeniStokDurumu;
    }
}

void urunverileri::setToplamAlisFiyati(double yeniToplamAlisFiyati)
{
    if(yeniToplamAlisFiyati!=su_dbltoplamAlisFiyati){
        su_dbltoplamAlisFiyati = yeniToplamAlisFiyati;
    }
}

void urunverileri::setToplamSatisFiyati(double yeniToplamSatisFiyati)
{
    if(yeniToplamSatisFiyati!=su_dbltoplamSatisFiyati){
        su_dbltoplamSatisFiyati = yeniToplamSatisFiyati;
    }
}



