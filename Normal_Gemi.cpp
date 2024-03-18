NormalGemi::NormalGemi() {
    this-> hiz_Ayarlamae();
    this->dayaniklilik_Ayarlama();
    this->yakit_Ayarlama();
    this->saglik_Ayarlama();
    this->para_Ayarlama();

}
void Normal_Gemi::hiz_Ayarlama( ) {

    this-> hizKatsayi=1.0;
    this->hiz=  static_cast<int>(this->hiz*this->hizKatsayi);

}

void Normal_Gemi::yakit_Ayarlama() {

    this-> yakitKatsayi=1.0;
    this->yakit=static_cast<int>(this->yakit*this->yakitKatsayi)  ;
}

void Normal_Gemi::saglik_Ayarlama() {

    this->saglikKatsayi=1.0;
    this->saglik=static_cast<int>(this->saglik*this->saglikKatsayi);
}


void Normal_Gemi::para_Ayarlama()
{

    this->para=0;

}

void Normal_Gemi::dayaniklilik_Ayarlama()
{
    this->dayaniklilikKatsayi=1.0;
    this->dayaniklilik=static_cast<int>(this->dayaniklilik* this->dayaniklilikKatsayi);
}
