#include "Uzay_Korsanlari.h"
#include<iostream>

using namespace std;

bool Uzay_Korsanlari::KacmaSonucu() {
    int KacmaIhtimali{50}; 
    int randomGeneratedNumber =rand()%100;
    
     if(static_cast<int>(randomGeneratedNumber*ThisGemi->hizKatsayisi)>=KacmaIhtimali)
     {
         return true;
     }
     else
     {
        return false;
     }
}

void UzayKorsanlari::Deal()
{
 UzayKorsanlariDealFonksiyonu();
}

void UzayKorsanlari:: UzayKorsanlariDealFonksiyonu() {
  
    int randomGeneratedNumber =static_cast<int>(std::rand()%100);/
    const int istenenPara{3}; 
    const int herDegerArasindaKacAltinOlsun{10}; 
    int ihtimal=static_cast<int> (100/istenenPara);
    for (int sayac{1};sayac<=istenenPara; ++sayac)
    {
        if((sayac*ihtimal>randomGeneratedNumber)&& (sayac-1)*ihtimal<=randomGeneratedNumber)
        {
            ThisGemi->paraGuncelleme(-(sayac*herDegerArasindaKacAltinOlsun));
            cout<<"Hesabinizdaki Para "<<ThisGemi->ParaOgrenme()<<"\n";
        }
    }
}
