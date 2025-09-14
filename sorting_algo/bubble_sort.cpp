#include<iostream>
using namespace std;

// bubble  sort function 
void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool isSwap =false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSwap =true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}
// print function
void print_arr(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
}

// main function
int main ()
{
    int arr[] = {4,1,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    print_arr(arr,n);
    return 0;
}