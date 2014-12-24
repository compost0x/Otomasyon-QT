#ifndef MEVCUTMUSTERI_H
#define MEVCUTMUSTERI_H

#include <QDialog>
#include <veriler/veritabani.h>
#include <formlar/musteriguncelle.h>
namespace Ui {
class mevcutmusteri;
}

class mevcutmusteri : public QDialog
{
    Q_OBJECT

public:
    explicit mevcutmusteri(QWidget *parent = 0);
    ~mevcutmusteri();
    void setVeritabani(veritabani *vt);

    void tabloGuncelle(musteriListesi liste);
private slots:
    void on_pushButton_clicked();

private:
    Ui::mevcutmusteri *ui;
    veritabani *su_ptrveritabani;

};

#endif // MEVCUTMUSTERI_H
