#include <bits/stdc++.h> 
using namespace std; 


class vehical{
   private:
       // These methods are called encapsulated/abstracted methods because they are hidden from outside the class
       // They can only be accessed from within the class methods
       void piston(){
           cout << "4 piston" << endl; // Prints piston information
       }
       void manwhomade(){
           cout << "mr elone" << endl; // Prints creator information
       }
   public:
       // Public methods that can be accessed from outside the class
       void company(){
           cout << "->Tesla" << endl; // Prints company name
       }
       void model(){
           cout << "->Tesla Model 3 " << endl; // Prints model information
       }
       void color(){
           cout << "->RED/GREEN/BLUE" << endl; // Prints available color options
       }
       void oil(){
           cout << "->No Need because this is Electic" << endl; // Prints information about oil requirement
       }
};


int main()
{
  vehical car; // Create an instance of the vehical class named 'car'
  
  // Call public methods of the car object
  car.model(); // Displays model information
  car.company(); // Displays company information
  car.color(); // Displays color options
  car.oil(); // Displays oil requirement information
  
  // Note: Private methods like car.piston() or car.manwhomade() cannot be accessed here

  return 0; // Returns 0 to indicate successful program execution
}