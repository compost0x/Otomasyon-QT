#-------------------------------------------------
#
# Project created by QtCreator 2014-12-06T16:31:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = otomasyon
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    veriler/musteriverileri.cpp \
    veriler/urunverileri.cpp \
    veriler/muhasebeverileri.cpp \
    veriler/veritabani.cpp \
    formlar/urunalisbilgileri.cpp \
    formlar/urunsatisbilgileri.cpp \
    formlar/musteribilgileri.cpp \
    formlar/satilanurunbilgileri.cpp \
    formlar/yeniurunkayit.cpp \
    formlar/yenimusterikayit.cpp \
    formlar/mevcuturun.cpp \
    formlar/mevcutmusteri.cpp \
    formlar/isletmebilgileri.cpp \
    formlar/muhasebedokumu.cpp \
    formlar/satilanuruntablosu.cpp \
    formlar/alinanuruntablosu.cpp \
    formlar/musteriguncelle.cpp \
    formlar/urunguncelle.cpp

HEADERS  += mainwindow.h \
    veriler/musteriverileri.h \
    veriler/urunverileri.h \
    veriler/muhasebeverileri.h \
    veriler/veritabani.h \
    formlar/urunalisbilgileri.h \
    formlar/urunsatisbilgileri.h \
    formlar/musteribilgileri.h \
    formlar/satilanurunbilgileri.h \
    formlar/yeniurunkayit.h \
    formlar/yenimusterikayit.h \
    formlar/mevcuturun.h \
    formlar/mevcutmusteri.h \
    formlar/isletmebilgileri.h \
    formlar/muhasebedokumu.h \
    formlar/satilanuruntablosu.h \
    formlar/alinanuruntablosu.h \
    formlar/musteriguncelle.h \
    formlar/urunguncelle.h

FORMS    += mainwindow.ui \
    formlar/urunalisbilgileri.ui \
    formlar/urunsatisbilgileri.ui \
    formlar/musteribilgileri.ui \
    formlar/satilanurunbilgileri.ui \
    formlar/yeniurunkayit.ui \
    formlar/yenimusterikayit.ui \
    formlar/mevcuturun.ui \
    formlar/mevcutmusteri.ui \
    formlar/isletmebilgileri.ui \
    formlar/muhasebedokumu.ui \
    formlar/satilanuruntablosu.ui \
    formlar/alinanuruntablosu.ui \
    formlar/musteriguncelle.ui \
    formlar/urunguncelle.ui

RESOURCES += \
    images.qrc
