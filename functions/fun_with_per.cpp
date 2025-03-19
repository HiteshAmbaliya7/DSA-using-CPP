#include <bits/stdc++.h> 
using namespace std; 


int add(int a, int b)
{
   return a + b; // Returns the sum of parameters a and b
}


int main()
{
   int a, b; // Declare two integer variables to store user input
   
   cout << "Enter 1st num :" << endl; // Prompt user to enter numbers (note: misleading prompt as it requests two numbers)
   cin >> a >> b; // Read two integers from standard input into variables a and b
   
   cout << a << b; // Print the values of a and b directly (without spaces or separation)
   cout << add(a, b); // Call add function with a and b as arguments and print the result (without newline)

   return 0; // Returns 0 to indicate successful program execution
}