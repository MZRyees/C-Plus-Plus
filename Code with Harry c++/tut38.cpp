#include<iostream>
using namespace std;
class Base{
    int data1;
    public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base ::setData(){
    data1 = 10;
    data2 = 30;
}
int Base :: getData1(){
    return data1; 
}
int Base :: getData2(){
    return data2; 
}
class Derived : public Base{
    int data3;
    public:
    void process();
    void show();
};
void Derived ::process(){
    data3 = data2*getData1();
}
void Derived :: show(){
    cout<<"The value in data1 is: "<<getData1()<<endl<<"And The value of Data2 is: "<<data2<<endl<<"And The value of Data3 is:"<<data3<<endl;
}
int main()
{
Derived der;
der.setData();
der.process();
der.show();
}