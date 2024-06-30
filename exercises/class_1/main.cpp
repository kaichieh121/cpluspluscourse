#include "class_1.hpp"
#include <sstream>
#include <iostream>
#include <string>

using namespace std;


int main() {
    // Create a CADModel object
    CADModel model("SampleModel");

    // Print model details
    model.printModelDetails();

    model.length = 12;
    model.width = 6;
    model.height = 3;

    // Print updated model details
    std::cout << "\nUpdated Model Details:" << std::endl;
    model.printModelDetails();



    return 0;
}