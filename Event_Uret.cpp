#include <iostream>
#include <memory>
#include "Asteroid_Kusagi.h"
#include "Event_Uret.h"
#include "UzayKorsanlari.h"
#include "Terkedilmis_Gezegen.h"
#include<cmath>

using namespace std;

EventGenerator::EventGenerator(shared_ptr<Gemi> AlinanGemi ) {
    eventGenerateEtmekIcinGemi=move(AlinanGemi);
    this->EventUretecekFonksiyon();

}

void EventGenerator::EventUretecekFonksiyon() {

    int randomGeneratedNumber =(rand()%(TotalEventNumber))+1;
    shared_ptr<Event> Yeni = nullptr;
    if (randomGeneratedNumber == 1) {
        
      Yeni = make_shared<Asteroid_Kusagi>(eventIcinGemi);
        
    } else if (randomGeneratedNumber == 2) {
      
        Yeni = make_shared<Uzay_Korsanlari>(eventIcinGemi);
        
    } else if (randomGeneratedNumber == 3) {
        
        Yeni = make_shared<Terkedilmis_Gezegen>(eventIcinGemi);
        
    }


}


