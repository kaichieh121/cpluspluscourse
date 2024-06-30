#include "class_1.hpp"

#include <iostream>
#include <array>
#include <string>

using namespace std;

// Constructor
// TODO, write this constructor
CADModel::CADModel(string n, double l, double w, double h){

}
CADModel::CADModel(string n){
    name = n;
    length = 0;
    width = 0;
    height = 0;
}

// Getters
string CADModel::getModelName() const{
    return name;
}

// TODO: write getters for height, width, and length;

// Setters
void CADModel::setModelName(string n){
    name = n;
}

// TODO: write setters for height, width, and length, and volumn calculator;

// Methods
double CADModel::calculateVolume() const{
}