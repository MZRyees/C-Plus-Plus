#include<iostream>
using namespace std;
class Base1{
    protected:
    int base1int;
    public:
    void setBase1int(int a){
        base1int = a;
    }
};
class Base2{
    protected:
    int base2int;
    public:
    void setBase2int(int b){
        base2int = b;
    }
};
class Base3{
    protected:
    int base3int;
    public:
    void setBase3int(int b){
        base3int = b;
    }
};
class Derived: public Base1, public Base2,public Base3{
    public:
    void show(){
        cout<<"The value of base1int is:"<<base1int<<endl;
        cout<<"The value of base2int is:"<<base2int<<endl;
        cout<<"The value of base3int is:"<<base3int<<endl;
        cout<<"The sum of base1int and Base2int is: is:"<<base1int+base2int+base3int<<endl;
    }
};
int main()
{
Derived harry;
harry.setBase1int(10);
harry.setBase2int(100);
harry.setBase3int(90);
harry.show();

}