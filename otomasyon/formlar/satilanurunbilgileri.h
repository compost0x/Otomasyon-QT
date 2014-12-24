#ifndef SATILANURUNBILGILERI_H
#define SATILANURUNBILGILERI_H
#include "formlar/yeniurunkayit.h"
#include "formlar/mevcuturun.h"
#include <QDialog>
#include "QLineEdit"
#include "veriler/veritabani.h"

namespace Ui {
class satilanurunbilgileri;
}

class satilanurunbilgileri : public QDialog
{
    Q_OBJECT

public:
    explicit satilanurunbilgileri(QWidget *parent = 0);
    ~satilanurunbilgileri();

    void setVeritabani(veritabani *vt);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:

    Ui::satilanurunbilgileri *ui;
    veritabani *su_ptrveritabani;
};

#endif // SATILANURUNBILGILERI_H
