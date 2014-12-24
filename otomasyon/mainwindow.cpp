#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCloseEvent>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    su_ptrveritabani = new veritabani;
    su_ptrveritabani->bilgileriOku();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::closeEvent(QCloseEvent *olay)
//{
//    olay->ignore();
//    hide();
//}

void MainWindow::on_pushButton_clicked()
{
    urunalisbilgileri form;
    ptrUrunVeri yeniUrunAlis = new urunverileri;
    //ptrMusteriVeri yeniMusteriAlis = new musteriverileri;
    form.setAlisYap(yeniUrunAlis);
    //form.setMusteriAlisYap(yeniMusteriAlis);
    form.setVeritabani(su_ptrveritabani);
    form.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    urunsatisbilgileri form;
    ptrUrunVeri yeniUrunSatis = new urunverileri;
    form.setSatisYap(yeniUrunSatis);
    form.setVeritabani(su_ptrveritabani);
    form.exec();
}

void MainWindow::on_pushButton_3_clicked()
{

    satilanurunbilgileri form;
    form.setVeritabani(su_ptrveritabani);
    form.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    musteribilgileri form;
    form.setVeritabani(su_ptrveritabani);
    form.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    isletmebilgileri form;
    form.setVeritabani(su_ptrveritabani);
    form.exec();
}

void MainWindow::on_pushButton_7_clicked()
{
    QMessageBox::information(this,
                          "Başarılı",
                          "Bilgiler Kaydedildi.");
    su_ptrveritabani->bilgileriKaydet();
}
