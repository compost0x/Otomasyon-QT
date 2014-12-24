#ifndef URUNSATISBILGILERI_H
#define URUNSATISBILGILERI_H

#include <QDialog>
#include "veriler/veritabani.h"
#include "formlar/satilanuruntablosu.h"
#include <QMessageBox>
namespace Ui {
class urunsatisbilgileri;
}

class urunsatisbilgileri : public QDialog
{
    Q_OBJECT

public:
    explicit urunsatisbilgileri(QWidget *parent = 0);
    ~urunsatisbilgileri();

    void setVeritabani(veritabani *vt);
    void setSatisYap(ptrUrunVeri apasUrun);
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::urunsatisbilgileri *ui;

    veritabani *su_ptrveritabani;
    ptrUrunVeri su_ptrurunsatis;
};

#endif // URUNSATISBILGILERI_H
