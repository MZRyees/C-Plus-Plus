#include<iostream>
using namespace std;
class Shop{
    int ItemId[100];
    int ItemPrice[100];
    int counter;
    public:
    void CountIt(void){counter= 0;}
    void setData();
    void DisplayData();
};
void Shop::setData(void){
    cout<<"Enter Id of your item No:"<<counter+1<<endl;
    cout<<"Kindly enter the Item Id:"<<endl;
    cin>>ItemId[counter];
    cout<<"Kindly Enter the Item Price:"<<endl;
    cin>>ItemPrice[counter];
    counter++;
}
void Shop::DisplayData(){
    for (int  i = 0; i < counter; i++)
    {
        cout<<"The price Id with Item is:"<<ItemId[i]<<" is "<<ItemPrice[i]<<endl;
    }
    
}
int main()
{
Shop Dukan;
Dukan.CountIt();
for(int i=0;i<5;i++){
Dukan.setData();
}
Dukan.DisplayData();
}