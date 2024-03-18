#include <iostream>
#include "AsteroidKusagi.h"
using namespace std;

void  AsteroidKusagi::GemiHasarAldiMi(int sayac) {
    const int İlkteAlinacakHasar{10};
    int randomSayi = rand()%101;// 0-100 arasında değer verecek çünkü 101 bölümden kalanı olacak
    const double GemiHasarOlasiligi{50.0};

    if(randomSayi>=static_cast<int>(GemiHasarOlasiligi/(ThisGemi->hizKatsayisi))) {
        cout<<sayac<<" Asteroid'de Hasar Alınmayacak \n ";
    }
      
    else{
        cout<<sayac<<".Ihtimalde Asteroid Kusaginda Gemi Hasar aldi\n";
        ThisGemi->saglikGuncelleme(İlkteAlinacakHasar);

        if(ThisGemi->saglikOgrenme()>=0) {
            cout<<"Geminin Sagligi \n"<<ThisGemi->saglikOgrenme()<<"\n";
        }

    }

}

void AsteroidKusagi::AsteroidKusagiBusinessLogicYapanFonk() {

   const int GemiHasariFonksiyonuKacKereDonecek{3};

    std::cout<<"Gemi Asteroid Kusagina Denk Geldi "<<GemiHasariFonksiyonuKacKereDonecek;
    std::cout<<"kere hasar alma ihtimali var \n";

    for(int sayac{1};sayac<=GemiHasariFonksiyonuKacKereDonecek;++sayac)
    {
        GemiHasarAldiMi(sayac);
        if(BuGemi->GemiOlduMu()) {
          break;
        }
    }
}
void AsteroidKusagi::pureVirtualYapanFonksiyon() {}

AsteroidKusagi::AsteroidKusagi(std::shared_ptr<Gemi>  AlinanGemi) {

    BuGemi=move(AlinanGemi);
    this->AsteroidKusagiBusinessLogicYapanFonk();

}
