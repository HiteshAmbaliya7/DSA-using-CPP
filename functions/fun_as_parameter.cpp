#include <bits/stdc++.h> 
using namespace std; 


float add(int i, int j, int n)
{
   return i+j+n; // Returns the sum of parameters i, j, and n
}


float avg(float add)
{
   return add/3; // Returns the value divided by 3
}


int main()
{
  int i, j, n; // Declares three integers (unused in this code)
  cout << avg(add(12, 13, 15)); // Calls add function with values 12, 13, and 15, then passes the result to avg function and prints the result (13.3333)

  return 0; 
}