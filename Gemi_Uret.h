#ifndef DENEME_GEMIURET_H
#define DENEME_GEMIURET_H
#include "Gemi.h"
#include"Event_Uret.h"

class Gemi_Uret {
public:
    Gemi_Uret();
protected:
    int EventCagirmaSayisi{5};
    void UserGemiUretFonksiyon();
    void GemiUretenFonksiyon(int);
    void EventUretenFonksiyon(shared_ptr<Gemi>);
    const int totalGemiTuru{3};
};

#endif //DENEME_GEMIURET_H
