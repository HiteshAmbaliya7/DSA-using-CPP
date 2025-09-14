#include<bits/stdc++.h>
using namespace std ;
int main()
{
     for(int i=1;i<=5;i++)
     {
        for(int j=i;j<5;j++)
        {
            cout << " ";
        }
        for(int k=i;k>=1;k--)
        {
            cout << k <<" ";
        }
        cout << endl;
      }
    return 0;
}