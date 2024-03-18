#ifndef DENEME_EVENTURET_H
#define DENEME_EVENTURET_H
using namespace std;

#include "Event.h"
class EventUret{
public:
    EventGenerator(shared_ptr<Gemi> );
    const int TotalEventNumber{3};
    shared_ptr<Gemi>  eventGenerateEtmekIcinGemi;
    void EventGenerateEdecekFonksiyon();
    const int OlayCagirmaSayisi{5};
};

#endif
