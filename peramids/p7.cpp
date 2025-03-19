#include <bits/stdc++.h>
using namespace std;
int main()
{
    // char a = 97;
    for (int i = 97; i <= 102; i++)
    {
        for (int j = i; j >= 97; j--)
        {
            cout << char(j)<<" ";
        }
        // a=a+1;
        cout << endl;
    }

    return 0;
}