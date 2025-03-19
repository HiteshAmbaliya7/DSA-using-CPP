#include <bits/stdc++.h>
using namespace std;
int reverse_arr(int arr[],int size)
{
    int start=0,end=size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return -1;
}
int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse_arr(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }    

    return 0;
}