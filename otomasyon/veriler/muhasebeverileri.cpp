#include "muhasebeverileri.h"

muhasebeverileri::muhasebeverileri()
{

}

double muhasebeverileri::alinanToplamFiyat()
{
    return su_dblalinanUrunlerinToplamFiyat;
}

double muhasebeverileri::satilanToplanFiyat()
{
    return su_dblsatilanUrunlerinToplamFiyat;
}

double muhasebeverileri::karZarar()
{
    return su_dblkarZararDurumu;
}

double muhasebeverileri::kdv()
{
    return su_dblkdv;
}

void muhasebeverileri::setAlinanToplamFiyat(double yeniAlinanToplamFiyat)
{
    if(yeniAlinanToplamFiyat!=su_dblalinanUrunlerinToplamFiyat){
        su_dblalinanUrunlerinToplamFiyat = yeniAlinanToplamFiyat;
    }
}

void muhasebeverileri::setSatilanToplamFiyat(double yeniSatilanToplamFiyat)
{
    if(yeniSatilanToplamFiyat!=su_dblsatilanUrunlerinToplamFiyat){
        su_dblsatilanUrunlerinToplamFiyat = yeniSatilanToplamFiyat;
    }
}

void muhasebeverileri::setKarZarar(double yeniKarZarar)
{
    if(yeniKarZarar!=su_dblkarZararDurumu){
        su_dblkarZararDurumu = yeniKarZarar;
    }
}

void muhasebeverileri::setKdv(double yeniKdv)
{
    if(yeniKdv!=su_dblkdv){
        su_dblkdv = yeniKdv;
    }
}

muhasebeverileri::~muhasebeverileri()
{

}

