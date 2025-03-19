#include <bits/stdc++.h> 
using namespace std;

class Complex1 {  // Class name should be PascalCase by convention (Complex1 instead of complex1)
private:
    int a, b;  // Private data members to store real and imaginary parts

public:
    // Constructor: Initializes the complex number
    Complex1(int a1, int b1) {
        a = a1;
        b = b1;
    }

    // Destructor: Called automatically when the object goes out of scope
    ~Complex1() {
        cout << "Destructor is called" << endl;
    }

    // Function to display the complex number
    void display() {
        cout << "Number: " << a << " + " << b << "i" << endl;
    }
};

int main() {
    Complex1 C(10, 12); // Creating an object of Complex1
    C.display();  // Displaying the complex number

    return 0;
} // Destructor is called automatically here when object `C` goes out of scope
