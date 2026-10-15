#include<iostream>
using namespace std;
class A{
    public:
    virtual void show(){
        cout<<"Base Class Member function is call:"<<endl;
    }
};
class B :public  A{
public:
void show(){
    cout<<"The member funtion of derived class is call:";
}
};
int main()
{
B objB;
objB.show();
objB.show();
// objB.A::show();
}