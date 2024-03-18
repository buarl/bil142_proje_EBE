#ifndef DENEME_UZAY_KORSANLARI_H
#define DENEME_UZAY_KORSANLARI_H
#include "Event.h"
using namespace std;

class Uzay_Korsanlari: public Event {

  public:
    void UzayKorsanlariniBaslatacakFonksiyon();
    void KullaniciTercihiAlmaFonksiyonu ();
    void OlaylarArasindakiFonk(int);

    const int UzayKorsanlariSecenek{3};

    bool KacmaSonucu();
    void SavasmaSonucu();

    void Deal();
    void UzayKorsanlariDealFonksiyonu();

    void pureVirtualYapanFonksiyon() override;

    Uzay_Korsanlari(shared_ptr<Gemi>);

};



#endif 
