#ifndef MEVCUTURUN_H
#define MEVCUTURUN_H

#include <QDialog>
#include <veriler/veritabani.h>
#include <formlar/urunguncelle.h>
namespace Ui {
class mevcuturun;
}

class mevcuturun : public QDialog
{
    Q_OBJECT

public:
    explicit mevcuturun(QWidget *parent = 0);
    ~mevcuturun();
    void setVeritabani(veritabani *vt);

    void tabloGuncelle(urunListesi liste);
private slots:
    void on_pushButton_clicked();

private:
    Ui::mevcuturun *ui;
    veritabani *su_ptrveritabani;
};

#endif // MEVCUTURUN_H
