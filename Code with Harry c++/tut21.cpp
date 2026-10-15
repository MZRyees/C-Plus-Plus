#include<iostream>
using namespace std;
class Student{
    private:
    int a, b , c;
    public:
    int d, e;
    void setData(int, int, int);
    void getData(){
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
        cout<<"The value of c is:"<<c<<endl;
        cout<<"The value of d is:"<<d<<endl;
        cout<<"The value of e is:"<<e<<endl;
    }
};
void Student::setData(int x, int y, int z){
    a = x;
    b = y;
    c = z;
}
int main()
{
  Student Ali;
  Ali.d  = 40;
  Ali.e = 30;
  Ali.setData(3,4,5);
  Ali.getData();
}