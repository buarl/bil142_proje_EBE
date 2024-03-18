#ifndef DENEME_UZAY_KORSANLARI_H
#define DENEME_UZAY_KORSANLARI_H
#include "Event.h"
using namespace std;

class Uzay_Korsanlari: public Event {

  public:
    void UzayKorsanlariniBaslatacakFonksiyon();
    void KullaniciTercihiAlmaFonksiyonu ();
    void OlaylarArasindaBusinessLogicYapanFonk(int);

    const int UzayKorsanlariSecenek{3};

    bool KacmaSonucu();
    void SavasmaSonucu();

    void PazarlikSonucu();
    void UzayKorsanlariPazarlikFonksiyonu();

    void pureVirtualYapanFonksiyon() override;

    UzayKorsanlari(shared_ptr<Gemi>);

};



#endif 
