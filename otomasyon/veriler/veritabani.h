#ifndef VERITABANI_H
#define VERITABANI_H
#include "muhasebeverileri.h"
#include "musteriverileri.h"
#include "urunverileri.h"

#include <QList>
#include <QHash>
#include <QMap>

#include <QFile>
#include <QDataStream>

//Pointerlar
typedef musteriverileri* ptrMusteriVeri;
typedef muhasebeverileri* ptrMuhasebeVeri;
typedef urunverileri* ptrUrunVeri;
//Listler
typedef QList<ptrMusteriVeri> musteriListesi;
typedef QList<ptrMuhasebeVeri> muhasebeListesi;
typedef QList<ptrUrunVeri> urunListesi;
typedef QList<ptrUrunVeri> satilanUrunListesi;
typedef QList<ptrUrunVeri> alinanUrunListesi;
typedef QList<ptrUrunVeri> urunleriGoster;
typedef QList<ptrUrunVeri> musterileriGoster;
//typedef QList<ptrUrunVeri> urunGoster;
//typedef QList<ptrUrunVeri> musteriGoster;
//Hashler
typedef QHash<QString, ptrMusteriVeri> MusteriKoduHash;
typedef QHash<QString, ptrUrunVeri> UrunKoduHash;
//Mapler
typedef QMap<QDate, ptrUrunVeri> urunSatisTarihMap;
typedef QMap<QDate, ptrUrunVeri> urunAlisTarihMap;


class veritabani
{
public:
    veritabani();
    ~veritabani();
    
    musteriListesi musteriler();
    muhasebeListesi muhasebe();
    urunListesi urunler();
    alinanUrunListesi alinanUrunler();
    satilanUrunListesi satilanUrunler();
    urunleriGoster kayitliUrunler();
    musterileriGoster kayitliMusteriler();
   // urunGoster kayitliUrun();
 //   musteriGoster kayitliMusteri();
    
    void musteriEkle(ptrMusteriVeri addMust);
    void urunEkle(ptrUrunVeri apasUrun);
    void urunSatis(ptrUrunVeri apasUrun);
    void urunAlis(ptrUrunVeri apasUrun);
    double satilanUrunler(satilanUrunListesi liste);
    double alinanUrunler(alinanUrunListesi liste);
    void bilgileriKaydet();
    void bilgileriOku();
    ptrMusteriVeri numarayaGoreMusteriBul(QString yeniKod);
    ptrUrunVeri numarayaGoreUrunBul(QString yeniUrunKodu);

    muhasebeListesi tariheGoreMuhasebeDokumu(QDate baslangicTarihi, QDate bitisTarihi);


    satilanUrunListesi satilanUrunlerAralikAramasi(QDate satisBaslangicTarihi, QDate satisBitisTarihi);
    alinanUrunListesi alinanUrunlerAralikAramasi(QDate alisBaslangicTarihi, QDate alisBitisTarihi);
private:

   musteriListesi su_lstMusteri;
   muhasebeListesi su_lstMuhasebe;
   urunListesi su_lstUrun;

   MusteriKoduHash su_hashMusteriKodu;
   UrunKoduHash su_hashUrunKodu;

   satilanUrunListesi su_lstSatilanUrun;
   alinanUrunListesi su_lstAlinanUrun;

   urunAlisTarihMap su_mapAlisTarihi;
   urunSatisTarihMap su_mapSatisTarihi;

   urunleriGoster su_lstUrunGoster;
   musterileriGoster su_lstMusteriGoster;
 //urunGoster su_lstUrunGoster;
 //musteriGoster su_lstMusteriGoster;

   ptrUrunVeri su_ptrUrun;


};

#endif // VERITABANI_H
