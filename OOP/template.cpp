#include<iostream>
using namespace std;
template<typename T> 
T Add(T a,T b){
    T c = a+b;
    return c;
}
int main()
{
    cout<<Add(9,8)<<endl;
    cout<<Add(9.0,8.8)<<endl;
}