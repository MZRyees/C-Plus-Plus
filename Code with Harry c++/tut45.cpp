#include<iostream>
using namespace std;
class Base1{
    int Data1;
    public:
    Base1(int d){
        Data1 = d;
        cout<<"Base1 constructor is called:"<<endl;
    }
    void printDataBase1(){
        cout<<"The value of Data1 is:"<<Data1<<endl;
    }
};
class Base2{
    int Data2;
    public:
    Base2(int d){
        Data2 = d;
        cout<<"Base2 constructor is called:"<<endl;
    }
    void printDataBase2(){
        cout<<"The value of Data2 is:"<<Data2<<endl;
    }
};
class Derived: public Base1,public Base2{
  int derived1, derived2;
  public:
  Derived(int a, int b, int c, int d): Base1(a),
  Base2(b){
    derived1 = c;
    derived2 = d;
    cout<<"Derived constructor is called:"<<endl;
  }
  void printDataDerived(){
     cout<<"The value of Derived1 is :"<<derived1<<endl;
    cout<<"The value of Derived2 is :"<<derived2<<endl;
  }
};
int main()
{
     Derived Der(4,5,6,8);
     Der.printDataBase1();
     Der.printDataBase2();
     Der.printDataDerived();
}
/*We can use constructors in derive classes in
C++.
     If Base class constructor does not have any argument, there is no need of any constructor in derived class.
     But if there are one or more arguments in the base class constructor derived class need to pass arguments to the base class constructor.
     If both Base and Derived class have constructors,base class constructor is executed first.
     ///////////////////////
     Constructor in Multiple Inheritence
     In multiple inheritence, base classes are constructed in the order in which they appear in the class declaration.
     In multilevel inheritence, the constructors are executed in the order of inheritence.
     Special Case of Virtual Class
     -->The contstructor for virtual base classes are invoked before and nonvirtual base class.
     -->If there are multiple virtual base classes, they are invoked in the order declared.
     -->Any non virtual base class are then constructed before the derived class constructor is executed.

     */