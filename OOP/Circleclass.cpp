#include<iostream>
using namespace std;
class Circle{
   float radius;
    public:
    void Get_radius(float value){
        radius = value;
    }
    void Area(){
        cout<<"The are of the circle is:"<<3.14*radius*radius<<endl;
    }
    void circum(){
        cout<<"Circumference of the circle is:"<<2*3.14*radius<<endl;
    }
};
int main()
{
    Circle c1;
    c1.Get_radius(5);
     c1.Area();
     c1.circum();
}