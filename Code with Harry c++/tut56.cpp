#include<iostream>
using namespace std;
class BaseClass{
public:
int base_var = 800;
void virtual print(){
    cout<<"The value of base class variable is:"<<base_var<<endl;
}     
};
class DerivedClass:public BaseClass{
    public:
int derived_var= 900;
void print(){
    cout<<"The value of Derived class variable is:"<<derived_var<<endl;
}     
};
int main()
{
BaseClass* pointer_base_Class;
BaseClass Obj_Base;
DerivedClass obj_Derived;
pointer_base_Class = &obj_Derived;
// pointer_base_Class->print();
pointer_base_Class->print();
return 0;
}