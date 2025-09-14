#include<bits/stdc++.h>
using namespace std ;
class test
{
    int a,b;
    public:
    test(int x,int y)
    {
        a=x;
        b=y;
    }
    void disp ()
    {
        cout <<a << endl;
        cout <<b << endl;
    }
};
int  main()
{
    test t1(10,20);
    t1.disp();
    return 0;
}