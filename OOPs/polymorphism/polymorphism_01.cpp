
// Function overloding 

#include <bits/stdc++.h>
using namespace std;
class object{
    public:
    void fun(){
        cout << "I'm a function with no argument"<<endl;
    }
    void fun(int x){
        cout<< "I'm a function with Int argument"<<endl;
    }
    void fun (double x){
        cout<<"I'm a function with double argument"<<endl;
    }
};
int main()
{
   object obj;
   obj.fun();
   obj.fun(10);
   obj.fun(10.4);
 
     return 0;
}
