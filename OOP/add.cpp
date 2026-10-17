#include<iostream>
using namespace std;
class A{
public:
int x , y;
// A():x(5),y(4){};

void shw()
{
    cout<<x<<y;
}
};
int main()
{
// A obj{4,6};
// obj.shw();
A obj1{4,5},obj2{6,7},obj3{0,0};
// obj3.x=obj2.x+obj1.x;
// obj3.y=obj2.y+obj1.y/12;
// obj3.x+=obj3.y;
obj3.x=obj1.x+obj2.x;
// cout<<obj3.x;

cout<<obj3.x;
obj3.y=obj1.y+obj2.y/12;
obj3.x=obj3.y;
cout<<obj3.x;
// cout<<obj3.y;

}