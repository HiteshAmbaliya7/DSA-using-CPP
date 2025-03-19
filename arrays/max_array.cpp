#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int smallest = INT_MAX;
    int maximum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maximum = max(arr[i], maximum);

        smallest = min(arr[i], smallest);
    }
    for(int i=0;i<size;i++){
        if(arr[i]==maximum)
        {
            cout<<"largest element"<<maximum<<" found at  "<<i<<endl;
        }
        if(arr[i]==smallest)
        {
            cout<<"largest element"<<smallest<<"found at   "<<i<<endl;
        }
    }
    cout << "Maximum => " << maximum << endl;
    cout << "minimum =>" << smallest << endl;
    return 0;
}