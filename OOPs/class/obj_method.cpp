#include <bits/stdc++.h> 
using namespace std;

class binary {
    string s;  // Private member variable to store binary string

public:
    void read();            // Reads binary input
    void chk_bin();         // Checks if input is a valid binary number
    void display();         // Displays the binary number
    void once_complement(); // Computes the one's complement
};

// Function to read a binary number from the user
void binary::read() {
    cout << "Enter a binary number: ";
    cin >> s;
    chk_bin();  // Automatically checks if input is valid binary
}

// Function to check if the string is a valid binary number
void binary::chk_bin() {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "Incorrect binary format!";
            exit(0);  // Terminates the program if input is invalid
        }
    }
}

// Function to display the binary number
void binary::display() {
    chk_bin();  // Ensures valid binary before displaying
    cout << "Binary Number: ";
    for (int i = 0; i < s.length(); i++) {
        cout << s.at(i);
    }
    cout << endl;
}

// Function to compute one's complement (flipping bits)
void binary::once_complement() {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '0') {
            s.at(i) = '1';
        } else if (s.at(i) == '1') {
            s.at(i) = '0';
        }
    }
    cout << "One's Complement Applied!" << endl;
}

int main() {
    binary b;         // Create an object of class binary
    b.read();         // Read binary input
    b.display();      // Display original binary number
    b.once_complement();  // Compute and store one's complement
    b.display();      // Display the modified binary number

    return 0;
}
