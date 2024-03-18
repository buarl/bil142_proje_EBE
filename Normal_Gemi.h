#ifndef DENEME_NORMAL_GEMI_H
#define DENEME1_NORMAL_GEMI_H
#include "Gemi.h"

using namespace std;


class Normal_Gemi:public Gemi {

   public:

    Normal_Gemi() ;

   protected:

    void hiz_Ayarlama () override;
    void dayaniklilik_Ayarlama () override;
    void para_Ayarlama () override;
    void saglik_Ayarlama () override;
    void yakit_Ayarlama () override;

};

#endif
