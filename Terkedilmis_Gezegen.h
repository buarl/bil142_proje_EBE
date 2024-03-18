#ifndef DENEME_TERKEDILMIS_GEZEGEN_H
#define DENEME_TERKEDILMIS_GEZEGEN_H
#include "Event.h"
using namespace std; 

class Terkedilmis_Gezegen : public Event {
public:

    void uzayKorsaniAltinOlasilikFonksiyonu();
    void uzayKorsaniAltin ();

    void TerkEdilmisGezegendekiUzayKorsanlariIcinFonksiyon();

    void pureVirtualYapanFonksiyon() override;

    Terkedilmis_Gezegen(shared_ptr<Gemi>);
    ~Terkedilmis_Gezegen();

};

#endif 
