#include <iostream>
#include <numeric> // For std::gcd (C++17 and above)
#include <vector>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    // Function to simplify the fraction
    void simplify() {
        // search up std gcd
    }

public:
    // Constructor

    // Operator overloading for +
    Fraction operator+(const Fraction& other) const {
    }

    // Operator overloading for *
    Fraction operator*(const Fraction& other) const {
    }

    // Operator overloading for <<
    friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
    }

    // Comparison operators

    friend bool compare(const Fraction &x, const Fraction &y);
};

int main() {
    // 1
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    // Arithmetic operations
    Fraction result;

    result = f1 + f2;
    std::cout << f1 << " + " << f2 << " = " << result << std::endl;

    result = f1 * f2;
    std::cout << f1 << " * " << f2 << " = " << result << std::endl;

    //2
    // Fraction f3(1, 3);
    // Fraction f4(1, 5);

    // vector<Fraction> v = {f1, f2, f3, f4};

    // for(auto elem : v) cout << elem << " ";
    // cout << endl;
    // sort(v.begin(), v.end());
    // for(auto elem : v) cout << elem << " ";
    // cout << endl;

    // // 3
    // sort(v.begin(), v.end(), compare);
    // for(auto elem : v) cout << elem << " ";
    // cout << endl;



    return 0;
}