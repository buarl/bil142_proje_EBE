#include <iostream>
#include "Event.h"
#ifndef DENEME_ASTEROIDKUSAGI_H
#define DENEME_ASTEROIDKUSAGI_H

using namespace std;

class Asteroid_Kusagi : public Event {
public:
    void GemiHasarAldiMi(int);
    void Asteroid_KusagiFonksiyon();
    void pureVirtualYapanFonksiyon() override;
    Asteroid_Kusagi(shared_ptr<Gemi> );

  };
}

void Asteroid_Kusagi::safSanalFonksiyon() {}
