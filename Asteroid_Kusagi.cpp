#include <iostream>
#include "AsteroidKusagi.h"
using namespace std;

void  AsteroidKusagi::GemiHasarAldiMi(int counter) {
    const int ilkteAlinacakHasar{10};
    int randomSayi = rand()%101;// 0-100 arasında değer verecek çünkü 101 bölümden kalanı olacak
    const double GemiHasarOlasiligi{50.0};

    if(randomSayi>=static_cast<int>(GemiHasarOlasiligi/(ThisGemi->hizKatsayisi))) {
        cout<<counter<<" Asteroid'de Hasar Alınmayacak \n ";
    }
      
    else{
        cout<<counter<<"Asteroid'de Gemi Hasar aldi\n";
        ThisGemi->saglikGuncelleme(ilkteAlinacakHasar);

        if(ThisGemi->saglikOgrenme()>=0) {
            cout<<"Geminin Sagligi \n"<<ThisGemi->saglikOgrenme()<<"\n";
        }

    }

}

void AsteroidKusagi::AsteroidKusagiBusinessLogicYapanFonk() {

   const int GemiHasariFonksiyonuDonme{3};

    cout<<"Gemi Asteroid Kusaginda! "<<GemiHasariFonksiyonuDonme;
    cout<<"hasar alabilir \n";

    for(int counter{1};counter <=GemiHasariFonksiyonuDonme;++counter) {
        GemiHasarAldiMi(counter);
        if(ThisGemi->GemiOlduMu()) {
          break;
        }
    }
}
void AsteroidKusagi::pureVirtualYapanFonksiyon() {}

AsteroidKusagi::AsteroidKusagi(shared_ptr<Gemi>AlinanGemi) {

    ThisGemi=move(AlinanGemi);
    this->AsteroidKusagiBusinessLogicYapanFonk();

}
