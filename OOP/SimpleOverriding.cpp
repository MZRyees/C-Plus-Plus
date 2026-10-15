/*Write a c++ program to create a base class shape with a function()area derived Circle and Triangle classes and override the area funcction.*/
#include <iostream>
using namespace std;

class Shape
{
public:
    void area()
    {
        cout << "Area of shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void area()
    {
        int r = 3;
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Triangle : public Shape
{
public:
    void area()
    {
        int b = 4, h = 6;
        cout << "Area of Triangle = " << 0.5 * b * h << endl;
    }
};

int main()
{
    Circle c;
    Triangle t;

    c.area();
    t.area();

    return 0;
}