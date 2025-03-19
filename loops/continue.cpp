#include <iostream>
using namespace std;

int main()
{
    int i;
    for (i = 0; i <= 30; i++)
    {
        if (i == 10)
        {
            break;
        }
        if(i%2==0){
            continue;
        }
        cout << i << endl;
    }
    i++;

    while(i<=30)
    {
        if(i==20)
        {
            break;
        }
        if(i%2!=0)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
        
    }

    return 0;
}