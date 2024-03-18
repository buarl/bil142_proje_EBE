#include<iostream>
#include "Gemi.h"


bool Gemi::GemiKontrol() {
    return yakit <= 0 || saglik <= 0;
}

int Gemi::yakitOgrenme() const {
    return yakit;
}
int Gemi::ParaOgrenme() const {
    return para;
}
int Gemi::saglikOgrenme() const  {
    return saglik;
}
void Gemi::saglikGuncelleme(int alinanHasar) {
    if (saglik - static_cast<int>(alinanHasar/this->dayaniklilikKatsayi) >= 0)
    {
        saglik -= static_cast<int>(alinanHasar/this->dayaniklilikKatsayi);
    } else {
        this->GemiKontrol();
    }
}

 void Gemi:: yakitGuncelleme(int azalanYakit)
 {
     if(yakit-azalanYakit*yakitAzalmaKatsayi>0)
     {
         yakit = yakit - static_cast<int>(yakitAzalmaKatsayi*azalanYakit);
     }
     else {
       this->GemiOlduMu();
     }
 }

void Gemi::paraGuncelleme(int deltaPara)
 {
    this-> para = para + deltaPara; 
 }

int Gemi::PuanHesaplama()
{
    const double PuanHesaplama_GemiSagligiKatSayi{10.0};
    const double PuanHesaplama_KalanYakitKatSayi{5.0};
    const double PuanHesaplama_KasadakiParaKatSayi{10.0};

    int ToplamPuan= static_cast<int>((this->saglik)*PuanHesaplama_GemiSagligiKatSayi+(this->yakit)*PuanHesaplama_KalanYakitKatSayi+(this->para)*PuanHesaplama_KasadakiParaKatSayi);

    return ToplamPuan;
}



