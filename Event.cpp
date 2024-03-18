#include"Event.h"
#include <iostream>

using namespace std;

Event::Event(shared_ptr<Gemi>SecilenGemi) {
    ThisGemi=move(SecilenGemi);
}
