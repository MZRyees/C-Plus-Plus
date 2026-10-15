#include<iostream>
using namespace std;
class Add{
    int a, b;
    public:
    Add(){
        a = b= 0;
    }
    void input(){
        cout<<"Please enter the value of a\n";
        cin>>a;
        cout<<"Kindly enter the value of b\n";
        cin>>b;
    }
    void show(){
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
    }
    Add operator +(Add p){
        Add temp;
        temp.a = p.a+a;
        temp.b = p.b+b;
        return temp;
    }
};
int main()
{
Add X,Y, Z;
X.input();
Y.input();
Z = X+Y;
X.show();
Y.show();
Z.show();
return 0;
}