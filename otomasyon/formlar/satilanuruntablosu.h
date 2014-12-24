#ifndef SATILANURUNTABLOSU_H
#define SATILANURUNTABLOSU_H

#include <QDialog>
#include "veriler/veritabani.h"
namespace Ui {
class satilanuruntablosu;
}

class satilanuruntablosu : public QDialog
{
    Q_OBJECT

public:
    explicit satilanuruntablosu(QWidget *parent = 0);
    ~satilanuruntablosu();

    void setVeritabani(veritabani *vt);
private slots:

private:
    Ui::satilanuruntablosu *ui;

    veritabani *su_ptrveritabani;
};


#endif // SATILANURUNTABLOSU_H
