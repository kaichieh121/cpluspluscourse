#pragma once
#include <string>
#include <iostream>

using namespace std;

class BlueLedStrip{
private:
    string color = "blue";
    int intensity;
    int pin;

public:
    void on(int num){
        cout << num << " of blue LED lighted up with intensity " << intensity << endl;
    }
    void off(){
        cout << "All blue LED turned off" << endl;
    }
    void set_intensity(int i){
        intensity = i;
    }
    void set_pin(int p){
        pin = p;
    }
};

class RedLedStrip{
private:
    string color = "red";
    int intensity;
    int pin;

public:
    void on(int num){
        cout << num << " of red LED lighted up with intensity " << intensity << endl;
    }
    void off(){
        cout << "All red LED turned off" << endl;
    }
    void set_intensity(int i){
        intensity = i;
    }
    void set_pin(int p){
        pin = p;
    }
};

