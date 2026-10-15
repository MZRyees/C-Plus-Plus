/*Write a c++ program to create a base class shape with a function()area derived Circle and Triangle classes and override the area funcction.*/
#include <iostream>
using namespace std;
class Shape {
    public:
    const float pi = 3.14;
    virtual void area() {
        cout << "Area of shape" << endl;
    }
};

class Circle : public Shape {
public:
    void area() override {
        float r = 5;
        cout << "Area of Circle: " << pi* r * r << endl;
    }
};

class Triangle : public Shape {
public:
    void area() override {
        float b = 4, h = 6;
        cout << "Area of Triangle: " <<b * h << endl;
    }
};

int main() {
    Shape* s;
    Circle c;
    Triangle t;

    s = &c;
    s->area();

    s = &t;
    s->area();

    return 0;
}