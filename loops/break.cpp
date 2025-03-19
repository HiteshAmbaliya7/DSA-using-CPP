#include <bits/stdc++.h>
using namespace std;
int main()
{
 int i;   
    for(int i=0;i<=20;i++)
    {
        cout<<i<<endl;
        if(i==10){
            
            break;
        }
    }
    i=11;
    while(i<=30){
        cout<<i<<endl;
      if(i==20){
        
        break;
      } 
      i++; 

    }
    i=21;
    do{
        cout<<i<<endl;
        if(i==30){
            
            break;
        }
        i++;
    }while(i<=30);
return 0;
}