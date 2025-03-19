#include <bits/stdc++.h>
using namespace std;
// perent class
class person{
    public:
        string name;
        int age;
        // consrtucture
    person(string name,int age){
        this->name=name;
        this->age=age;
    }
    // constructure for perent class
    person(){
        cout <<"perent constructure "<<endl;
    }
    // distructure of perent 
    ~person(){
        cout << "this is perent distructure"<<endl;
    }
};

//  this is inherit class form person
// child class 
class student : public person{
    public:
    int rollno; 
    // perameterised constructure
        student(string name,int age,int rollno):person(name,age) {
            this->rollno=rollno;
        }
        void getinfo(){
        cout << "name :"<<name << endl;
        cout << "age :"<<age << endl;
        cout << "rollno :"<<rollno << endl;
    }
    // distructure of child
    ~student(){
        cout << "child distructure "<<endl;
    }
};
int main()
{
   student s1("hitesh",20,123);
   
   s1.getinfo();
 
     return 0;
}