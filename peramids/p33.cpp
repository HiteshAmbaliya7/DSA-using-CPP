#include<bits/stdc++.h>
using namespace std ;
int main()
{
     for(int i=101;i>=97;i--)
     {
        for(int j=97;j<=i;j++)
        {
             cout << char(i) << ' ';

        }
        cout << endl;
      }
    return 0;
}