#ifndef ISLETMEBILGILERI_H
#define ISLETMEBILGILERI_H
#include "formlar/muhasebedokumu.h"
#include <QDialog>

namespace Ui {
class isletmebilgileri;
}

class isletmebilgileri : public QDialog
{
    Q_OBJECT

public:
    explicit isletmebilgileri(QWidget *parent = 0);
    ~isletmebilgileri();
void setVeritabani(veritabani *vt);
private slots:
    void on_pushButton_clicked();

private:
    muhasebedokumu muhasebeDokumu;

    Ui::isletmebilgileri *ui;
    veritabani *su_ptrveritabani;
};

#endif // ISLETMEBILGILERI_H
