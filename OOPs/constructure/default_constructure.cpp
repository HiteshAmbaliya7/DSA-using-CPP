#include <bits/stdc++.h> 
using namespace std;

class Complex1 {  // Class name should be PascalCase by convention (Complex1 instead of complex1)
private:
    int a, b;  // Private data members to store real and imaginary parts

public:
    Complex1() {
        a = 10;
        b = 20;
    }

    
    
    // Function to display the complex number
    void display() {
        cout << "Number: " << a << " + " << b << "i" << endl;
    }
};

int main() {
    Complex1 C; 
    C.display();  // Displaying the complex number

    return 0;
} 