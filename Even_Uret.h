#ifndef DENEME_EVENTURET_H
#define DENEME_EVENTURET_H
using namespace std;

#include "Event.h"
class Event_Uret{
public:
    Event_Uret(shared_ptr<Gemi> );
    const int TotalEventNumber{3};
    shared_ptr<Gemi>  eventIcinGemi;
    void EventUretecekFonksiyon();
    const int EventCagirmaSayisi{5};
};


#endif
