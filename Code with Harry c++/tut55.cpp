#include<iostream>
using namespace std;
class BaseClass{
public:
int base_var;
void Display(){
    cout<<"The value of base class variable is:"<<base_var<<endl;
}
};
class DerivedClass :public BaseClass{
public:
int derived_var;
void Display(){
    cout<<"The value of derived class variable is:"<<derived_var<<endl;
}
};
int main()
{
BaseClass *base_class_pointer;
BaseClass obj_base;
DerivedClass obj_derived;
base_class_pointer = &obj_derived;
base_class_pointer->base_var = 56;
base_class_pointer->Display();
DerivedClass *derived_class_pointer;
derived_class_pointer = &obj_derived;
derived_class_pointer->derived_var=90;
derived_class_pointer->Display();
return 0;
}