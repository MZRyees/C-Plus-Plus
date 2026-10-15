#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(){
        a = 10;
    }
    friend void show(A,B);
};
class B{
    int b;
    public:
    B(){
        b = 20;
    }
    friend void show(A,B);
};
void show(A x, B y){
    int Sum = x.a+y.b;
    
    cout<<"The Sum of " <<x.a<< " and " <<
    y.b<<" is: "<<Sum<<endl;
}
int main(){
A objA;
B objB;
show(objA,objB);
}