#include<iostream>
using namespace std;
class Class{
    int a,b;
    public:
    Class(){
    a = b = 100;
    }
    void average();
};
void Class::average(){
    cout<<"The value of a is:"<<a<<endl;
    cout<<"the vlaud of b is:"<<b<<endl;
    cout<<"The average is:"<<(a+b)/2<<endl;
}
int main(){
  Class obj1;
  obj1.average();
}