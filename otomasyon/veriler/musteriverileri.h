#ifndef MUSTERIVERILERI_H
#define MUSTERIVERILERI_H
#include <QString>
#include <QDate>

class musteriverileri
{
public:
    musteriverileri();

    QString musteriKodu();
    QString musteriAdi();
    QString musteriSoyadi();
    QString musteriAdresi();


    void setMusteriKodu(QString yeniKod);
    void setMusteriAdi(QString yeniAd);
    void setMusteriSoyadi(QString yeniSoyad);
    void setMusteriAdresi(QString yeniAdres);

    ~musteriverileri();


private:
    QString su_strmusteriKodu;
    QString su_strmusteriAdi;
    QString su_strmusteriSoyadi;
    QString su_strmusteriAdresi;
};
#endif // MUSTERIVERILERI_H
