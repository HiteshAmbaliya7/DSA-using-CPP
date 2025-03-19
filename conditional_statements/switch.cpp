#include <bits/stdc++.h> // Include the standard library header
using namespace std; // Use the standard namespace

int main()
{
    // Declare variable to store user input
    int day;
    
    // Prompt user to enter a day number
    cout << "Enter Day :";
    cin >> day;
    
    // Use switch statement to determine which day corresponds to the input number
    switch (day)
    {
        case 1:
         cout << "monday"; // Output monday if user enters 1
         break;
        case 2:
        cout << "tuesday"; // Output tuesday if user enters 2
        break;
        case 3:
        cout << "wednesday"; // Output wednesday if user enters 3
        break;
        case 4:
        cout << "friday"; // Output friday if user enters 4
        break;
        case 5:
        cout <<"saturday"; // Output saturday if user enters 5
        break;
        case 6:
        cout << "sunday"; // Output sunday if user enters 6
        break;

    default:
        // If user enters a number not between 1-6, display error message
        cout << "plese enter 1 to 6 Day";
        break;
    }
    
    return 0; // Exit the program with status code 0 (success)
}