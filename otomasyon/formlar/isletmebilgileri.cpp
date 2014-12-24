#include "isletmebilgileri.h"
#include "ui_isletmebilgileri.h"

isletmebilgileri::isletmebilgileri(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::isletmebilgileri)
{
    ui->setupUi(this);
}

isletmebilgileri::~isletmebilgileri()
{
    delete ui;
}

void isletmebilgileri::on_pushButton_clicked()
{
    muhasebedokumu form;
    form.setVeritabani(su_ptrveritabani);
    form.exec();
}

void isletmebilgileri::setVeritabani(veritabani *vt)
{
    if(su_ptrveritabani!=vt){
        su_ptrveritabani=vt;
    }
}
