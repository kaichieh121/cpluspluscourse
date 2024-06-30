#pragma once
#include <string>
#include <iostream>

using namespace std;

class CADModel {
// private variables: name, length, width, height, material
private:
    string name;
    float length;
    float width;
    float height;

public:
    // Constructor
    CADModel(string name, double l, double w, double h);
    CADModel(string name);

    // Getters
    string getModelName() const;

    double getLength() const;

    double getWidth() const;

    double getHeight() const;

    // Setters
    void setModelName(string name);

    void setLength(double l);

    void setWidth(double w);

    void setHeight(double h);
    
    // Methods
    double calculateVolume() const;

    // Method to print model details
    void printModelDetails() const {
        std::cout << "Model Name: " << name << std::endl;
        std::cout << "Dimensions: " << length << " x " << width << " x " << height << std::endl;
        std::cout << "Volume: " << calculateVolume() << " cubic units" << std::endl;
    }
};