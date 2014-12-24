#ifndef ALINANURUNTABLOSU_H
#define ALINANURUNTABLOSU_H

#include <QDialog>
#include "veriler/veritabani.h"
#include "formlar/urunalisbilgileri.h"
namespace Ui {
class alinanuruntablosu;
}

class alinanuruntablosu : public QDialog
{
    Q_OBJECT

public:
    explicit alinanuruntablosu(QWidget *parent = 0);
    ~alinanuruntablosu();

    void setVeritabani(veritabani *vt);
private:
    Ui::alinanuruntablosu *ui;

    veritabani *su_ptrveritabani;
    ptrUrunVeri su_ptrUrun;
};

#endif // ALINANURUNTABLOSU_H
