#ifndef MUHASEBEDOKUMU_H
#define MUHASEBEDOKUMU_H
#include "veriler/veritabani.h"
#include "veriler/urunverileri.h"
#include "veriler/musteriverileri.h"
#include "veriler/musteriverileri.h"
#include "formlar/satilanuruntablosu.h"
#include <QDialog>

namespace Ui {
class muhasebedokumu;
}

class muhasebedokumu : public QDialog
{
    Q_OBJECT

public:
    explicit muhasebedokumu(QWidget *parent = 0);
    ~muhasebedokumu();

    void setVeritabani(veritabani *vt);
private slots:
    void on_pushButton_clicked();

private:
    Ui::muhasebedokumu *ui;
    veritabani *su_ptrveritabani;
};

#endif // MUHASEBEDOKUMU_H
