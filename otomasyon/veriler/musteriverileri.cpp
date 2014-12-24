#include "musteriverileri.h"

musteriverileri::musteriverileri()
{

}

QString musteriverileri::musteriKodu()
{
    return su_strmusteriKodu;
}

QString musteriverileri::musteriAdi()
{
    return su_strmusteriAdi;
}

QString musteriverileri::musteriSoyadi()
{
    return su_strmusteriSoyadi;
}

QString musteriverileri::musteriAdresi()
{
    return su_strmusteriAdresi;
}

void musteriverileri::setMusteriKodu(QString yeniKod)
{
    if(yeniKod!=su_strmusteriKodu){
        su_strmusteriKodu = yeniKod;
    }
}

void musteriverileri::setMusteriAdi(QString yeniAd)
{
    if(yeniAd!=su_strmusteriAdi){
        su_strmusteriAdi = yeniAd;
    }
}

void musteriverileri::setMusteriSoyadi(QString yeniSoyad)
{
    if(yeniSoyad!=su_strmusteriSoyadi){
        su_strmusteriSoyadi = yeniSoyad;
    }
}

void musteriverileri::setMusteriAdresi(QString yeniAdres)
{
    if(yeniAdres!=su_strmusteriAdresi){
        su_strmusteriAdresi = yeniAdres;
    }
}

musteriverileri::~musteriverileri()
{

}

