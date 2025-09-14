// Destructor: Called automatically when the object goes out of scope.
// Destructor is called automatically here when object `C` goes out of scope
#include <bits/stdc++.h>
using namespace std ;
class test 
{
    int a,b;
    public: 
    test ()         // constructure
    {
        a=10;
        b=20;
        cout << " this is constructure "<<endl;
    }
    
    ~ test()
    {
        cout << " this is distructure ";
    }

};
int main()
{
    test t1;

    return 0;
}
