#include <memory>
#include "Asteroid_Kusagi.h"
#include "Event_Uret.h"
#include "Uzay_Korsanlari.h"
#include "Terkedilmis_Gezegen.h"
#include<cmath>

using namespace std;

Event_Uret::Event_Uret(shared_ptr<Gemi> AlinanGemi ) {
    //eventUretmekIcinGemi=move(AlinanGemi);
    this->EventUretecekFonksiyon();

}

void Event_Uret::EventUretecekFonksiyon() {

    int randomGeneratedNumber =(rand()%(TotalEventNumber))+1;
    shared_ptr<Event> Yeni = nullptr;
    if (randomGeneratedNumber == 1) {

        Yeni = make_shared<Asteroid_Kusagi>(eventIcinGemi);

    } else if (randomGeneratedNumber == 2) {

        Yeni = make_shared<Uzay_Korsanlari>(eventIcinGemi);

    } else if (randomGeneratedNumber == 3) {

        Yeni = make_shared<Terkedilmis_Gezegen>(eventIcinGemi);

    }


