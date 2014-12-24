#ifndef URUNVERILERI_H
#define URUNVERILERI_H
#include <QString>
#include <QDate>
#include <QHash>
#include <QMap>

#include "musteriverileri.h"

class  urunverileri
{
public:
    urunverileri();
  ~urunverileri();

    QString urunKodu();
    QString urunAdi();
    QString olcuBirimi();
    QString musteriKodu();
    QString urunAlisMiktari();
    QString urunSatisMiktari();
    QDate urunAlisTarihi();
    QDate urunSatisTarihi();
    QString birimFiyati();
    QString stokDurumu();
    double toplamAlisFiyati();
    double toplamSatisFiyati();

    void setUrunKodu(QString yeniUrunKodu);
    void setUrunAdi(QString yeniUrunAdi);
    void setOlcuBirimi(QString yeniOlcuBirimi);
    void setMusteriKodu(QString yeniMusteriKodu);
    void setUrunAlisMiktari(QString yeniUrunAlisMiktari);
    void setUrunSatisMiktari(QString yeniUrunSatisMiktari);
    void setUrunAlisTarihi(QDate yeniUrunAlisTarihi);
    void setUrunSatisTarihi(QDate yeniUrunSatisTarihi);
    void setBirimFiyati(QString yeniBirimFiyati);
    void setStokDurumu(QString yeniStokDurumu);
    void setToplamAlisFiyati(double yeniToplamAlisFiyati);
    void setToplamSatisFiyati(double yeniToplamSatisFiyati);





private:

    QString su_strurunKodu;
    QString su_strurunAdi;
    QString su_strolcuBirimi;
    QString su_strmusteriKodu;
    QString su_strurunAlisMiktari;
    QString su_strurunSatisMiktari;
    QDate su_dateurunAlisTarihi;
    QDate su_dateurunSatisTarihi;
    QString su_dblbirimFiyati;
    QString su_dblstokdurumu;
    double su_dbltoplamAlisFiyati;
    double su_dbltoplamSatisFiyati;



};
#endif // URUNVERILERI_H
