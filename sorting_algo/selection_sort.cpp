#include<iostream>
using namespace std;

// selection sort
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}

// print arr
void print_arr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}

//main
int main()
{
    int arr[] = {4,1,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    selection_sort(arr,n);
    print_arr(arr,n);
    
    return 0;
}