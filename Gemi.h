#ifndef DENEME_GEMI_H
#define DENEME_GEMI_H
#include <iostream>
using namespace std;

class Gemi {
public:
    int para{0};
    int saglik{100};
    int yakit{100};
    int dayaniklilik{1};
    int hiz{1};
    int defaultYakit{33};

    float hizKatsayi{1.0};
    float saglikKatsayi{1.0};
    float yakitKatsayi{1.0};
    float dayaniklilikKatsayi{1.0};
    float yakitAzalmaKatsayi{1.0};

    virtual void hiz_Ayarlama  () = 0 ;
    virtual void dayaniklilik_Ayarlama () = 0 ;
    virtual void para_Ayarlama () = 0 ;
    virtual void saglik_Ayarlama () = 0 ;
    virtual void yakit_Ayarlama () = 0 ;

public:

    int yakitOgrenme() const;
    int PuanHesaplama() const;
    int saglikOgrenme() const;
    int paraOgrenme() const;
    void paraGuncelleme(int);
    void yakitGuncelleme(int);
    void saglikGuncelleme(int);
    bool GemiKontrol() ;
    
};
#endif
