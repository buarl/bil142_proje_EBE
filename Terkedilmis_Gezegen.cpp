#include <iostream>
#include "Terkedilmis_Gezegen.h"
#include "Uzay_Korsanlari.h"
using namespace std;

void Terkedilmis_Gezegen::uzayKorsaniAltinOlasilikFonksiyonu() {
    int randomGeneratedNumber = rand() % 100;
    const int KazanilanAltin = 10;
    const int AltinOlasilik = 50;

    if (randomGeneratedNumber >= AltinOlasilik) {
        cout << "OMG TEBRİKLER ALTIN BULDUNUZ\n";
        BuGemi->paraGuncelleme(KazanilanAltin);
    } else {
        TerkEdilmisGezegendekiUzayKorsanlariIcinFonksiyon();
    }
}

void Terkedilmis_Gezegen::TerkEdilmisGezegendekiUzayKorsanlariIcinFonksiyon() {
    cout << "UZAY KORSANLARI IS HERE!!!!!\n";
    auto NewUzayKorsanlariEvent = make_shared<Uzay_Korsanlari>(BuGemi);
}

void Terkedilmis_Gezegen::uzayKorsaniAltin() {
    uzayKorsaniAltinOlasilikFonksiyonu();
}

Terkedilmis_Gezegen::~Terkedilmis_Gezegen() {
    // (Destructor) fonksiyon
}

void Terkedilmis_Gezegen::pureVirtualYapanFonksiyon() {
    // Pure virtual fonksiyonun uygulanması
}

Terkedilmis_Gezegen::Terkedilmis_Gezegen(shared_ptr<Gemi> AlinanGemi) : BuGemi(move(AlinanGemi)) {
    uzayKorsaniAltin();
}
