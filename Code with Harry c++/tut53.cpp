#include<iostream>
using namespace std;
class A{
    int Data;
    public:
    // A & SetData(int Data){
      void SetData(int Data){
       this->Data = Data;
    //    return *this;
    }
    void PrintData(){
        cout<<"The value of Data is :"<<Data<<endl;
    }
};
int main()
{
    A a;
    a.SetData(9);
    a.PrintData();
return 0;
}
//"This" is a keyword which is also a pointer which points to the object which invokes the data member or member function