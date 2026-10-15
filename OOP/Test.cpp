#include<iostream>
using namespace std;
class Shape{
    public:
   virtual void Area(int a){
    }
};
class Circle:public Shape{
    public:
    void Area(int a){
        cout<<"The Area of Circle is:"<<3.14*a*a<<endl;
    }
};
class square:public Shape{
    public:
    void Area(int c)
    {
        cout<<"The area of Rectangle is:"<<c*c<<endl;
    }
};
int main()
{
    Shape *ptr;
    Circle c1;
ptr = &c1;
ptr->Area(4);



}