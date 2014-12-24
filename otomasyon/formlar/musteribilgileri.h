#ifndef MUSTERIBILGILERI_H
#define MUSTERIBILGILERI_H
#include "formlar/yenimusterikayit.h"
#include <QDialog>
#include "QLineEdit"
#include "veriler/veritabani.h"

namespace Ui {
class musteribilgileri;
}

class musteribilgileri : public QDialog
{
    Q_OBJECT

public:
    explicit musteribilgileri(QWidget *parent = 0);
    ~musteribilgileri();


    void setVeritabani(veritabani *vt);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:

    Ui::musteribilgileri *ui;
    veritabani *su_ptrveritabani;
};

#endif // MUSTERIBILGILERI_H
