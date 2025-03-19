#include <bits/stdc++.h>
using namespace std;
int main()
{
    int no,num=1;
    cout << "Enter number :";
    cin >> no;
    for(int i=0;i<no;i++)
    {
        for(int j=0;j<no-i-1;j++){
            cout << " ";
        }
        for(int j=1;j<=i+1;j++)
        {
            cout << j<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout <<j <<" ";
        }
        cout<<endl;
        
    }

    return 0;
}