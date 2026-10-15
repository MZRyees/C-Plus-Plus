#include<iostream>
using namespace std;
class A{
    int count;
    public:
    A(){
        count=0;
    }
   void printData1(){
        cout<<"The value of count before Overloading is:"<<count<<endl;
    }
    void operator ++(){
        count=count+1;
    }
    void printData2(){
        cout<<"The value of count after overloading is:"<<count<<endl;
    }
};
int main(){
    A obj;
    obj.printData1();
    obj.operator++();
    obj.printData2();
}