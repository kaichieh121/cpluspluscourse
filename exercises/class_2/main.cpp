#include "class_2.hpp"
#include <sstream>
#include <iostream>
#include <string>

using namespace std;


int main() {

    BlueLedStrip a;
    RedLedStrip b;
    a.set_intensity(255);
    b.set_intensity(255);
    a.set_pin(2);
    b.set_pin(3);
    a.on(5);
    b.on(5);
    a.off();
    b.off();

    return 0;
}