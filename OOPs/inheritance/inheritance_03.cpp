// multilavel inherantance 
#include <bits/stdc++.h>
using namespace std;
class person{
    public:
        string name;
        int age;
};
class student :public person{       // person class inherit in student
    public:
    int rollno;
};
class gradstud :public student{      // then student class inherit into gradstud 
    public:
    string resercharea;
};
int main()
{
   gradstud s1;
   s1.name="hitesh";
   s1.resercharea="computer scince";
   cout <<s1.name <<endl;
   cout<<s1.resercharea<<endl;
 
     return 0;
}