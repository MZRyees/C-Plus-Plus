#include<iostream>
using namespace std;
class Base{
    private:
    int a;
    protected:
    int b, c;
    public:
    char d;
};
class Derived : public Base{
    public:
    void GetData(){
    cout<<"Kindly enter the value of b and c:";
    cin>>b;
    cin>>c;
    }
    void Display(){
        // cout<<"The Enter value of a is:"<<a<<endl; In Accessible because the data member is declared as a private member of derived class
        cout<<"The value of B and C are:"<<b<<"and "<<c<<endl;
    }
};
int main(){
    Derived obj1;
    // obj1.c = 6; this is the protected member of the class therefore we cannot access this data outside of the class
    obj1.GetData();
    obj1.Display();
    obj1.d= 'k';
    cout<<"The value of d is:"<<obj1.d<<endl;
    // obj1.a = 8; It also inaccessible because it is defined in the private member of the Base class
}