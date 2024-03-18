#include "Guclu_Gemi.h"


Guclu_Gemi::Guclu_Gemi() {
    this->hiz_Ayarlama();
    this->dayaniklilik_Ayarlama();
    this->yakit_Ayarlama();
    this->saglik_Ayarlama();
    this->para_Ayarlama();
}

void Guclu_Gemi::hiz_Ayarlama() {

   this-> hizKatsayisi={0.5};
   this-> hiz=  static_cast<int>(this->hiz* this->hizKatsayi);
}

void Guclu_Gemi::yakit_Ayarlama() {

    this-> yakitKatsayi={1.0};
    this-> yakit=static_cast<int>(this->yakit*this->yakitKatsayi)  ;
}

void Guclu_Gemi::saglik_Ayarlama() {

    this->saglikKatsayi=1.0;
    this->saglik=static_cast<int>(this->saglik*this->saglikKatsayi);
}

void Guclu_Gemi::para_Ayarlama() {
    this->para=0;
}

void Guclu_Gemi::dayaniklilik_Ayarlama()
{
    this->dayaniklilikKatsayi=1.5;
    this->dayaniklilik=static_cast<int>(this->dayaniklilik*this->dayaniklilikKatsayi);
}

