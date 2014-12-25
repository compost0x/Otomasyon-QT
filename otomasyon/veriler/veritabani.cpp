#include "veritabani.h"

veritabani::veritabani()
{

}

veritabani::~veritabani()
{
    
}

musteriListesi veritabani::	musteriler()
{
    return su_lstMusteri;
}

muhasebeListesi veritabani::muhasebe()
{
    return su_lstMuhasebe;
}

urunListesi veritabani::urunler()
{
    return su_lstUrun;
}

alinanUrunListesi veritabani::alinanUrunler()
{
    return su_lstAlinanUrun;
}

satilanUrunListesi veritabani::satilanUrunler()
{
    return su_lstSatilanUrun;
}

//urunGoster veritabani::kayitliUrun()
//{
//    return su_lstUrunGoster;
//}

//musteriGoster veritabani::kayitliMusteri()
//{
//    return su_lstMusteriGoster;


void veritabani::musteriEkle(ptrMusteriVeri addMust)
{

    
   su_lstMusteri.append(addMust);
   su_hashMusteriKodu[addMust->musteriKodu()] = addMust;

}

void veritabani::urunEkle(ptrUrunVeri apasUrun)
{
   su_lstUrun.append(apasUrun);
   su_hashUrunKodu[apasUrun->urunKodu()] = apasUrun;



}

void veritabani::urunSatis(ptrUrunVeri apasUrun)
{
    su_lstSatilanUrun.append(apasUrun);
    su_mapSatisTarihi.insertMulti(apasUrun->urunSatisTarihi(),apasUrun);
}

void veritabani::urunAlis(ptrUrunVeri apasUrun)
{
    su_lstAlinanUrun.append(apasUrun);
    su_mapAlisTarihi.insertMulti(apasUrun->urunAlisTarihi(), apasUrun);
}

double veritabani::satilanUrunler(satilanUrunListesi liste)
{

    double toplam=0;
    for(int i = 0; i<liste.count();i++){
        toplam=liste[i]->toplamSatisFiyati()+toplam;
    }
    return toplam;
}

double veritabani::alinanUrunler(alinanUrunListesi liste)
{
    double toplam=0;
    for(int i = 0; i<liste.count();i++){
        toplam=liste[i]->toplamAlisFiyati()+toplam;
    }
    return toplam;
}

void veritabani::bilgileriKaydet()
{
    QFile f1("musteriler.veri");
    QFile f2("urunler.veri");
    QFile f3("satilan.veri");
    QFile f4("alinan.veri");
    if(f1.open(QIODevice::WriteOnly)){
        QDataStream ds(&f1);

        ds<<su_lstMusteri.count();
        foreach (ptrMusteriVeri must, su_lstMusteri) {
           ds<<must->musteriKodu();
           ds<<must->musteriAdi();
           ds<<must->musteriSoyadi();
           ds<<must->musteriAdresi();
        }
        f1.close();
    }
    if(f2.open(QIODevice::WriteOnly)){
        QDataStream ds(&f2);

        ds<<su_lstUrun.count();
        foreach (ptrUrunVeri urun, su_lstUrun) {
            ds<<urun->urunKodu();
            ds<<urun->urunAdi();
            ds<<urun->olcuBirimi();
            ds<<urun->birimFiyati();
        }
        f2.close();
    }
    if(f3.open(QIODevice::WriteOnly)){
        QDataStream ds(&f3);

        ds<<su_lstSatilanUrun.count();
        foreach(ptrUrunVeri urun, su_lstSatilanUrun){
            ds<<urun->urunKodu();
            ds<<urun->olcuBirimi();
            ds<<urun->musteriKodu();
            ds<<urun->urunSatisMiktari();
            ds<<urun->urunSatisTarihi();

            ds<<urun->birimFiyati();
            ds<<urun->toplamSatisFiyati();
        }
        f3.close();
    }
    if(f4.open(QIODevice::WriteOnly)){
        QDataStream ds(&f4);

        ds<<su_lstAlinanUrun.count();
        foreach (ptrUrunVeri urun, su_lstAlinanUrun) {
            ds<<urun->urunKodu();
            ds<<urun->olcuBirimi();
            ds<<urun->musteriKodu();
            ds<<urun->urunAlisMiktari();
            ds<<urun->urunAlisTarihi();

            ds<<urun->birimFiyati();
            ds<<urun->toplamAlisFiyati();

        }
        f4.close();
    }
}

void veritabani::bilgileriOku()
{
    QFile f1("musteriler.veri");
    QFile f2("urunler.veri");
    QFile f3("satilan.veri");
    QFile f4("alinan.veri");

    if(f1.open(QIODevice::ReadOnly)){
        QDataStream ds(&f1);

        int elemanSayisi;
        ds>>elemanSayisi;
        for(int i=0;i<elemanSayisi;i++){
            QString no;
            QString adi;
            QString soyad;
            QString adres;

            ds>>no;
            ds>>adi;
            ds>>soyad;
            ds>>adres;

            ptrMusteriVeri must = new musteriverileri;

            must->setMusteriKodu(no);
            must->setMusteriAdi(adi);
            must->setMusteriSoyadi(soyad);
            must->setMusteriAdresi(adres);

            musteriEkle(must);
        }
        f1.close();
    }
    if(f2.open(QIODevice::ReadOnly)){
        QDataStream ds(&f2);

        int elemanSayisi;
        ds>>elemanSayisi;
        for(int i=0;i<elemanSayisi;i++){
            QString no;
            QString adi;
            QString olcu;
//            QString	mustno;
//            QString alismiktari;
//            QString satismiktari;
//            QDate alistarihi;
//            QDate satistarihi;
            QString birimfiyati;
//            double toplamalisfiyati;
//            double toplamsatisfiyati;

            ds>>no;
            ds>>adi;
            ds>>olcu;
//            ds>>mustno;
//            ds>>alismiktari;
//            ds>>satismiktari;
//            ds>>alistarihi;
//            ds>>satistarihi;
            ds>>birimfiyati;
//            ds>>toplamalisfiyati;
//            ds>>toplamsatisfiyati;

            ptrUrunVeri urun = new urunverileri;

            urun->setUrunKodu(no);
            urun->setUrunAdi(adi);
            urun->setOlcuBirimi(olcu);
//            urun->setMusteriKodu(mustno);
//            urun->setUrunAlisMiktari(alismiktari);
//            urun->setUrunSatisMiktari(satismiktari);
//            urun->setUrunAlisTarihi(alistarihi);
//            urun->setUrunSatisTarihi(satistarihi);
            urun->setBirimFiyati(birimfiyati);
//            urun->setToplamAlisFiyati(toplamalisfiyati);
//            urun->setToplamSatisFiyati(toplamsatisfiyati);

            urunEkle(urun);
           // urunSatis(urun);
           // urunAlis(urun);

        }
        f2.close();
    }
    if(f3.open(QIODevice::ReadOnly)){
        QDataStream ds(&f3);

        int elemanSayisi;
        ds>>elemanSayisi;
        for(int i=0;i<elemanSayisi;i++){
            QString no;
            QString olcu;
            QString	mustno;
            QString satismiktari;
            QDate satistarihi;
            QString birimfiyati;
            double toplamsatisfiyati;

            ds>>no;
            ds>>olcu;
            ds>>mustno;
            ds>>satismiktari;
            ds>>satistarihi;
            ds>>birimfiyati;
            ds>>toplamsatisfiyati;

            ptrUrunVeri urun = new urunverileri;

            urun->setUrunKodu(no);
            urun->setOlcuBirimi(olcu);
            urun->setMusteriKodu(mustno);
            urun->setUrunSatisMiktari(satismiktari);
            urun->setUrunSatisTarihi(satistarihi);
            urun->setBirimFiyati(birimfiyati);
            urun->setToplamSatisFiyati(toplamsatisfiyati);


            urunSatis(urun);
           // urunAlis(urun);

        }
        f3.close();

}
    if(f4.open(QIODevice::ReadOnly)){
        QDataStream ds(&f4);

        int elemanSayisi;
        ds>>elemanSayisi;
        for(int i=0;i<elemanSayisi;i++){
            QString no;
            QString olcu;
            QString	mustno;
            QString alismiktari;
            QDate alistarihi;
            QString birimfiyati;
            double toplamalisfiyati;

            ds>>no;
            ds>>olcu;
            ds>>mustno;
            ds>>alismiktari;
            ds>>alistarihi;
            ds>>birimfiyati;
            ds>>toplamalisfiyati;

            ptrUrunVeri urun = new urunverileri;

            urun->setUrunKodu(no);
            urun->setOlcuBirimi(olcu);
            urun->setMusteriKodu(mustno);
            urun->setUrunAlisMiktari(alismiktari);
            urun->setUrunAlisTarihi(alistarihi);
            urun->setBirimFiyati(birimfiyati);
            urun->setToplamAlisFiyati(toplamalisfiyati);


            urunAlis(urun);


        }
        f4.close();
}
}



ptrMusteriVeri veritabani::numarayaGoreMusteriBul(QString yeniKod)
{
   ptrMusteriVeri sonuc = NULL;

   if(su_hashMusteriKodu.keys().contains(yeniKod)){
       sonuc = su_hashMusteriKodu[yeniKod];
   }
   return sonuc;
}

ptrUrunVeri veritabani::numarayaGoreUrunBul(QString yeniUrunKodu)
{
   ptrUrunVeri sonuc = NULL;

   if(su_hashUrunKodu.keys().contains(yeniUrunKodu)){
       sonuc = su_hashUrunKodu[yeniUrunKodu];
   }
   return sonuc;
}



satilanUrunListesi veritabani::satilanUrunlerAralikAramasi(QDate satisBaslangicTarihi, QDate satisBitisTarihi)
{
    satilanUrunListesi sonuc;

    urunSatisTarihMap::iterator satisBaslangic = su_mapSatisTarihi.lowerBound(satisBaslangicTarihi);
    urunSatisTarihMap::iterator satisBitis = su_mapSatisTarihi.upperBound(satisBitisTarihi);
    urunSatisTarihMap::iterator i;
    for(i=satisBaslangic; i!=satisBitis;i++){
        sonuc.append(i.value());
    }
    return sonuc;

}

alinanUrunListesi veritabani::alinanUrunlerAralikAramasi(QDate alisBaslangicTarihi, QDate alisBitisTarihi)
{
    alinanUrunListesi sonuc;

    urunAlisTarihMap::iterator alisBaslangic = su_mapAlisTarihi.lowerBound(alisBaslangicTarihi);
    urunAlisTarihMap::iterator alisBitis = su_mapAlisTarihi.upperBound(alisBitisTarihi);
    urunAlisTarihMap::iterator i;
    for(i=alisBaslangic; i!=alisBitis; i++){
        sonuc.append(i.value());
    }
    return sonuc;
}





