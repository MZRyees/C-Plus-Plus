#include<iostream>
using namespace std;
template<typename T>
T maximum(T a, T b){
    if(a>b)
    return a;
    else if(a==b)
    cout<<"a and b are equal:"<<endl;
    else 
    return b;
}
int main()
{
 cout<<"the maximum value is:"<<maximum(9,6)<<endl;
 cout<<"the maximum value is:"<<maximum(9.8,9.9)<<endl;
 cout<<"the maximum value is:"<<maximum(9,10)<<endl;
 cout<<"the maximum value is:"<<maximum('@','a')<<endl;
}