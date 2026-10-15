#include<iostream>
using namespace std;
inline int product(int a, int b){
    return a*b;
}
float MoneyRecieved(int currentMoney, float factor= 1.04){
    return currentMoney*factor;
}
int main()
{
//     int x, y;
//     cout<<"Please Enter the value of x:";
//     cin>>x;
//     cout<<"Enter the value of Y:";
//     cin>>y;
//    cout<<"The product of a and b is:"<<product(x,y);
int money = 100000;
cout<<"if you have Rs "<<money<<"Balance in your account you will get Rs "<<MoneyRecieved(money)<<"money after one year:"<<endl;
cout<<"For Vip:"<<"if you have Rs "<<money<<"Balance in your account you will get Rs "<<MoneyRecieved(money,1.1)<<"money after one year:"<<endl;
}
