#include<iostream>
using namespace std;
template<typename T>
class Sum{
 T a, b;
 public:
 Sum(T x, T y){
    a = x;
    b = y;
 }
 void show(){
    cout<<"The Sum of Two Integer Value is:"<<a+b<<endl;
    cout<<"The Sum of Two double Value is:"<<a+b<<endl;
 }
};
int main()
{
    Sum <int>s(9,5);
    s.show();
    Sum<double>s2(9.0,99.6);
    s.show();

}