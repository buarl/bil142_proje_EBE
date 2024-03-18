#include "Uzay_Korsanlari.h"
#include<iostream>

using namespace std;

bool Uzay_Korsanlari::KacmaSonucu() {
    int KacmaIhtimali{50};
    int randomGeneratedNumber =rand()%100;

    if(static_cast<int>(randomGeneratedNumber*BuGemi->hizKatsayi)>=KacmaIhtimali)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Uzay_Korsanlari::Deal()
{
    UzayKorsanlariDealFonksiyonu();
}
void Uzay_Korsanlari:: UzayKorsanlariDealFonksiyonu() {

    int randomGeneratedNumber =static_cast<int>(std::rand()%100);
    const int istenenPara{3};
    const int herDegerArasindaKacAltinOlsun{10};
    int ihtimal=static_cast<int> (100/3);
    for (int sayac{1};sayac<=3; ++sayac)
    {
        if((sayac*ihtimal>randomGeneratedNumber)&& (sayac-1)*ihtimal<=randomGeneratedNumber)
        {
            BuGemi->paraGuncelleme(-(sayac*herDegerArasindaKacAltinOlsun));
            cout<<"Hesabinizdaki Para "<<BuGemi->paraOgrenme()<<"\n";
        }
    }
}
