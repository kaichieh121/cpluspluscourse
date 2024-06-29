#include "struct_exercise.hpp"
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

// Define the Student struct here
struct StudentStruct {
};

int main() {
    // Create an array of 3 Student structs

    // Populate the array with data
    for (int i = 0; i < 2; ++i) {
        cout << "Enter details for student " << i + 1 << endl;
        
        cout << "Name: ";
        cin >> ;
        
        cout << "Age: ";
        cin >> ;
        
        cout << "Grade: ";
        cin >> ;
    }

    // Display the information of each student
    cout << "\nStudent Details:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Student " << i + 1 << endl;
        cout << "Name: " <<  << endl;
        cout << "Age: " <<  << endl;
        cout << "Grade: " <<  << endl;
        cout << endl;
    }

    return 0;
}