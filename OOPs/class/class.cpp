#include <bits/stdc++.h>  
using namespace std;

// Class representing a user
class user {
public:
    string name;
    int id;

    void userDetails() {}  // Function declared but not implemented, should have logic or be removed.
};

// Class representing a car
// class car {   
// private:
//     string name[10];  // Unused array, consider using `string name;` instead.
//     int speed;
//     int mileage;

//     p() {  // Function `p()` is missing return type, should be `void p()`
//         cout << "car class";
//     }
// };

// Base class with protected member
// class a {
// protected:
//     int a = 100;  

//     a() {  // Constructor is private, which will prevent object creation in `main()`
//         cout << a << endl;
//     }
// };

// Empty class `a_child`, likely intended to inherit from `a`
// class a_child {
//     // No inheritance from `a`, if needed should be: `class a_child : public a {}`
// };

int main() {
    user u1;   // Creating an object of class `user`
    // car c1;    // Creating an object of class `car`
    // a a1;      // ERROR: Constructor `a()` is private, so `a1` cannot be created.

    u1.name = "hitesh";  // Assigning value to `name` attribute
    cout << u1.name;  // Printing user name

    return 0;
}
