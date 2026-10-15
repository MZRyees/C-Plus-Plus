#include<iostream>
using namespace std;
class Shop{
int id;
float price;
public:
void setData(int x, int y){
    id = x;
    price = y;
}
void diplayData(){
    cout<<"The id of this item is:"<<id<<endl;
    cout<<"The price of this item is:"<<price<<endl;
}
};
int main()
{
    int p;
    float q;
    int i;
Shop *ptr = new Shop[4];
Shop *tempptr = ptr;
for (int  i = 0; i < 4; i++)
{
   cout<<"kindly enter the id and price of the item"<<i+1<<endl;
   cin>>p>>q;
   ptr->setData(p,q);
   ptr++;
}
for (int i = 0; i < 4; i++)
{
    cout<<"Your id no and price is:"<<p << q<<endl;
     tempptr->diplayData();
     tempptr++;
 
}
}
