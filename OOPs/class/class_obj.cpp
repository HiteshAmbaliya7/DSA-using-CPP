#include <bits/stdc++.h> 
using namespace std; 


class Human{
   public:
   string name;        // Public attribute to store the human's name
   string occupation;  // Public attribute to store the human's occupation
   int age;            // Public attribute to store the human's age

   
   void eat(){
       cout << "this person Eating" << endl;
   }
   
   
   void drink(){
       cout << "this preson is drinling" << endl;
   }
   
   
   void sleep(){
       cout << "this persion is sleeping" << endl;
   }
};

/**
* Main entry point of the program
* @return 0 indicating successful execution
*/
int main()
{
  Human human1;                // Create an instance of the Human class named 'human1'
  human1.name = "hitesh";      // Assign the name "hitesh" to the human1 object
  human1.occupation = "student"; // Assign the occupation "student" to the human1 object
  human1.age = 20;             // Assign the age 20 to the human1 object
  
  cout << human1.name << endl;      // Print the name of human1
  cout << human1.occupation << endl; // Print the occupation of human1
  cout << human1.age << endl;       // Print the age of human1
  
  // Note: The class methods (eat, drink, sleep) are defined but not called in this code

  return 0; // Returns 0 to indicate successful program execution
}