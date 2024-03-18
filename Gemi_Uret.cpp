
#include "Gemi_Uret.h"
#include <iostream>
#include<memory>
#include "Hizli_Gemi.h"
#include "Guclu_Gemi.h"
#include "Normal_Gemi.h"
#include  <array>
using namespace std;


void Gemi_Uret::GemiUretenFonksiyon(int user) {
    shared_ptr<Gemi> Ship = nullptr;
    if (user == 1) {
        Ship = make_shared<Normal_Gemi>();
    } else if (user == 2) {
        Ship = make_shared<Guclu_Gemi>();
    } else if (user == 3) {
        Ship = make_shared<Hizli_Gemi>();
    }


    EventUretenFonksiyon(Ship);

}

void Gemi_Uret:: EventUretenFonksiyon(shared_ptr<Gemi> Ship) {
    shared_ptr<Event_Uret>Yeni;

    int deneme=3;
    int counter_1{1};


    while (!Ship->GemiKontrol() && counter_1<=deneme)
    {

        cout<< " " <<counter_1<<"\n";
        Yeni = make_shared<Event_Uret>(Ship);
        ++counter_1;

    }

    cout<<"Puan "<<Ship->PuanHesaplama()<<"\n";
}

void Gemi_Uret::userGemiUretFonksiyon()
{

    GemiSecimiBaslangici:

    cout<<"Geminizin Ne Oldugunu Giriniz. \n (Normal Gemi 1) (Guclu Gemi icin 2) (Hizli Gemi icin 3)\n";
    int GemiTur;
    cin>>GemiTur;
    if(int i = 1< i++; i<4){
        GemiUretenFonksiyon(GemiTur);
    }
    else
    {
        cout<<"ERROR 404 NOT FOUND!!!!\n";

    }

}

