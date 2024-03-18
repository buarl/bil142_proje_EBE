#ifndef DENEME_HIZLI_GEMI_H
#define DENEME_HIZLI_GEMI_H
#include "Gemi.h"
using namepsace std;

class Hizli_Gemi:public Gemi {
        public:
            Hizli_Gemi();
        protected:
            void dayaniklilik_Ayarlama () override ;
            void hiz_Ayarlama  () override;
            void yakit_Ayarlama () override;
            void para_Ayarlama () override ;
            void saglik_Ayarlama () override;
        };

#endif 
