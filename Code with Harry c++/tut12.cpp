#include<iostream>
using namespace std;
int main()
{
    //pointer is a data type which is used to store the address of another datatype
    int a = 3;
    int * b = &a;
    cout<<"The Adress of a is:"<<&a<<endl;
    cout<<"The Adrees of a is:"<<b<<endl;
    // The value at adress b is 
    cout<<"The value at adress b is:"<<*b<<endl;
    //pointer to pointer 
    int ** c = &b;
    cout<<"The adrees of b is:"<<&b<<endl;
    cout<<"The adrees of b is:"<<c<<endl;
    cout<<"The value at adress c is:"<<*c<<endl;
    cout<<"The value at c of c is:"<<**c<<endl;
}