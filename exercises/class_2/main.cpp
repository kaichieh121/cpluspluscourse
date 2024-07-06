#include "class_2.hpp"
#include <sstream>
#include <iostream>
#include <string>
#include <stack>
#include <queue>

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




    
    std::stack<int> st;

    // Push elements onto the stack

    // Pop an element from the stack

    // Peek the top element

    std::queue<int> q;

    // Enqueue elements into the queue

    // Dequeue an element from the queue

    // Peek the front element


    return 0;


}