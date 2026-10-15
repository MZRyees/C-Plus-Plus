#include<iostream>
using namespace std;
class Base1{
    public:
    void show(){
        cout<<"Hello! How Are You:"<<endl;
    }
};
class Base2{
    public:
    void show(){
        cout<<"Kicha Asus:"<<endl;
    }
};
class Derived:public Base1, public Base2{
public:
void print(){
    cout<<"calling the base1 and base2 class inside derived class is\n:";
    Base1::show();
    Base2::show();
}
};
class B{
    public:
    void say(){
        cout<<"Jam asusa:"<<endl;
    }
};
class D:public B{
    public:
    void say(){
        cout<<"Jm Asusa M hardi:"<<endl;
    }
};
int main()
{
   /*Ambiguity 1
   Base1 base1;
   base1.show();
   Base2 base2;
   base2.show();
   Derived derived;
   derived.print();
   */
B b;
b.say();
D d;
d.say();

}
