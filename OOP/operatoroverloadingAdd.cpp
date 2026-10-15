#include<iostream>
using namespace std;
class Add{
    int a,b;
    public:
    Add(){
        a = b= 0;
    }
    void getData(){
        cout<<"Please Enter the value of a:"<<endl;
        cin>>a;
        cout<<"Please Enter the value of b:"<<endl;
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
int main(){
     Add obj1, obj2,obj3;
     obj1.getData();
     obj2.getData();
     obj3 = obj1+obj2;
    //  obj1.show();
    //  obj1.show();
    //  obj2.show();
     obj3.show();
}