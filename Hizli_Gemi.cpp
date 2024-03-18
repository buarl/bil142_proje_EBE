#include "Hizli_Gemi.h"

Hizli_Gemi::Hizli_Gemi(){
    this-> hiz_Ayarlama();
    this->dayaniklilik_Ayarlama();
    this->yakit_Ayarlama();
    this->saglik_Ayarlama();
    this->para_Ayarlama();
}

void Hizli_Gemi::hiz_Ayarlama() {

   this->hizKatsayi={1.5};
   this-> hiz=  static_cast<int>(this->hiz*this->hizKatsayi);

}

void Hizli_Gemi::yakit_Ayarlama() {

    this->yakitKatsayi={1.0};
    yakit=static_cast<int>(yakit*yakitKatsayi)  ;
}

void Hizli_Gemi::saglik_Ayarlama() {

    this->saglikKatsayi={1.0};
   this-> saglik=static_cast<int>(this->saglik*saglikKatsayi);
}


void Hizli_Gemi::para_Ayarlama() {
    this->para=0;
}

void Hizli_Gemi::dayaniklilik_Ayarlama()
{
    this->dayaniklilikKatsayi=0.5;
    this->dayaniklilik=static_cast<int>(this->dayaniklilik*this->dayaniklilikKatsayi);
}
