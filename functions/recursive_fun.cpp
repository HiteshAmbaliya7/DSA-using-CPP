#include <bits/stdc++.h> 
using namespace std; 


int display(int str, int end){
   if(str == end){ // Base case: when start value equals end value
       cout << "end value is aquired"; // Print message indicating end value reached
       return -1; // Return -1 to indicate end condition was met
   }
   
   cout << str << endl; // Print current value followed by newline
   str++; // Increment the start value
   display(str, end); // Recursive call with incremented start value
   return 0; // Return 0 (note: this return value is never used as the recursive call's return is ignored)
}


int main()
{
   // Call display function with start value 1 and end value 10
   // Will print numbers from 1 to 9, followed by "end value is aquired"
   // Then prints the final return value (-1)
   cout << display(1, 10);
   return 0; // Returns 0 to indicate successful program execution
}