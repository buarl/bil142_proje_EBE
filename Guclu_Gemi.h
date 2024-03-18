#ifndef DENEME_GUCLU_GEMI_H
#define DENEME_GUCLU_GEMI_H
#include "Gemi.h"
using namespace std;

class Guclu_Gemi:public Gemi {
public:
    Guclu_Gemi();
protected:
    void hiz_Ayarlama  () override;
    void dayaniklilik_Ayarlama () override ;
    void para_Ayarlama () override ;
    void saglik_Ayarlama () override;
    void yakit_Ayarlama () override;
};

#endif
