#include <bits/stdc++.h>
using namespace std;
// perent class
class person{
    public:
        string name;
        int age;
        // consrtucture
    // person(string name,int age){
    //     this->name=name;
    //     this->age=age;
    // }
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
// it means we use data members of perent calss in chaild class without creating object of perentclass
// child class 
class student : public person        // single inheritance
{
    public:
    int rollno;
        student(){
            cout << "child constructure"<<endl;
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
   student s1;
   s1.name="hitesh";
   s1.age=20;
   s1.rollno=123;
   s1.getinfo();
 
     return 0;
}