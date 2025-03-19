#include <bits/stdc++.h>
using namespace std;
class encapsulation {
    private:
        //data hidden from out side world
        int x;
    public:
        // function to set vale to variable x;
        void set(int a){
            x=a;
        } 
        // function to return value of variable x;
        int get(){
            return x;
        }  
};
int main()
{
   encapsulation obj;
   obj.set(10);
   cout << obj.get() <<endl;
 
     return 0;
}