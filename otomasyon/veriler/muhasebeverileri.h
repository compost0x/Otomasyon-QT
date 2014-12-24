#ifndef MUHASEBEVERILERI_H
#define MUHASEBEVERILERI_H
#include <QString>
#include <QDate>

class muhasebeverileri
{
public:
    muhasebeverileri();
 ~muhasebeverileri();

   double alinanToplamFiyat();
   double satilanToplanFiyat();
   double karZarar();
   double kdv();

   void setAlinanToplamFiyat(double yeniAlinanToplamFiyat);
   void setSatilanToplamFiyat(double yeniSatilanToplamFiyat);
   void setKarZarar(double yeniKarZarar);
   void setKdv(double yeniKdv);



private:
  double  su_dblalinanUrunlerinToplamFiyat;
  double  su_dblsatilanUrunlerinToplamFiyat;
  double  su_dblkarZararDurumu;
  double  su_dblkdv;

  QDate  su_datebaslangicTarihi;
  QDate  su_datebitisTarihi;


};
#endif // MUHASEBEVERILERI_H
