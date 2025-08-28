#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start = 1; // takea starting number 
    for(int i=1;i<=5;i++)
    {
        int num =start ;      // assign it into num variable 
        for(int j=1;j<=i;j++)
        {
            cout <<num<< " ";   // print num variable 
            num++;              // num increase by 1
        }
        start = num -1;         // when courser is come out inner loop then start reassign with num - 1 
        cout << endl;
    }

    return 0;
}