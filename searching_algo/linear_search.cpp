#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[], int size, int terget)
{
   for (int i = 0; i < size; i++)
   {
      if (arr[i] == terget)
      {
         // cout << "Terget Found At " << i << " index" << endl;
         return i;
         break;
      }
   }
   return -1;
}
int main()
{
   int arr[] = {4, 2, 7, 8, 1, 2, 5};
   int terget = 5;
   int size = sizeof(arr) / sizeof(arr[0]);
   int result =linear_search(arr,size,terget);
   if(result!=-1){

      cout << "Terget Found At " << result << " index" << endl;
   }
   else{
      cout <<"terget not found in array"<<endl;
   }
   return 0;
}