#include <bits/stdc++.h>
using namespace std;
class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(){counter =0;}
        void setPrice();
        void displayPrice();
};
void shop :: setPrice(){
    cout << "Enter Id of your Item :";
    cin >> itemId[counter];
    cout  << "Enter Price of Your Item :";
    cin >> itemPrice[counter];
    counter++;
}
void shop :: displayPrice(){
    for(int i=0 ;i<counter;i++){
        cout << "the Id of Item is "<<itemId[i]<<" Price of item is "<< itemPrice[i]<<endl;
    }
}

int main()
{
   shop d;
   d.initCounter();
   d.setPrice();
   d.setPrice();
   d.setPrice();
   d.setPrice();
   d.displayPrice();
 
     return 0;
}