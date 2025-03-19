#include <bits/stdc++.h>  
using namespace std;

class Car {
private:
    int a, b, c; // Private members: cannot be accessed directly from main()

public:
    int d, e; // Public members: can be accessed and modified directly

    // Function to set private data members
    void setData(int a1, int b1, int c1);

    // Function to display values of all members
    void getData() {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
        cout << "Value of c: " << c << endl;
        cout << "Value of d: " << d << endl;
        cout << "Value of e: " << e << endl;
    }
};

// Function definition for setting private data members
void Car::setData(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}

int main() {
    Car c1; // Creating an object of class Car

    // Public members can be accessed directly
    c1.d = 12;
    c1.e = 25;

    // Private members are set through the setter function
    c1.setData(12, 23, 24);

    // Display the values of the object
    c1.getData();

    return 0;
}
