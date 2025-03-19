#include <bits/stdc++.h>
using namespace std;
float bmi (float height ,float weight)
{
    float bmi = (height*height)/weight;
    return bmi;
}
int main()
{
   float height,weight;
   cout << "Enter height in cm :";
   cin >> height ;
   cout << "Enter weight in kg :";
   cin >> weight ;
   cout << bmi(height,weight); //call by reference
   cout << bmi(180,60); //call by value

 
     return 0;
}