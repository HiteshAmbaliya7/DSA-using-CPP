#include <bits/stdc++.h>
using namespace std;
class circl{
     float area;
     float radious;
     public:
        void getredious(){
            cout << "Enter redious : ";
            cin >> radious;
        }
        void findArea(){
            area =3.14*radious*radious;
            cout <<"Area of circle :"<<area<<endl;
        }

};
int main()
{
   circl cir;
   cir.getredious();
   cir.findArea();
 
     return 0;
}
/*
step 1: create circle class define two privet variable area and radious.
step 2: define two public method to set value of radious and get value of area.
step 3: create obj cir and call the methods of the circle class.
*/