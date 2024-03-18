#ifndef DENEME_EVENT_H
#define DENEME_EVENT_H
#include "Gemi.h"
#include<memory>

using namespace std;

class Event{
protected:
    Event() = default;
    virtual void pureVirtualYapanFonksiyon() = 0;
public :
    shared_ptr<Gemi> BuGemi= nullptr;
    Event(shared_ptr<Gemi>  SecilenGemi);
};

#endif
