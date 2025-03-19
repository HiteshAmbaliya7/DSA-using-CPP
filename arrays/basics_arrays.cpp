#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks[5]={20,30,40,50,60};
    int price[]={10,50,60,70,80,90};
    int size=sizeof(marks)/sizeof(int);
    cout <<size<<endl;
    
    // access elements in array
    // cout <<marks[0]<<endl;
    // cout <<marks[2]<<endl;
    // cout <<marks[3]<<endl;

    //also applay loop on array 
    for(int i=0;i<size;i++)
    {
        cout<<marks[i]<<endl;
    }
 
     return 0;
}