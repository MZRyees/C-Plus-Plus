/*
Question:
Create a base class Shape with a function display().
Derive two classes, Circle and Rectangle, from Shape.
Override the display() function in both derived classes
to print their own shape names.
*/

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void display() {
        cout << "This is a Shape" << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    // Overriding the display() function
    void display() {
        cout << "This is a Circle" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    // Overriding the display() function
    void display() {
        cout << "This is a Rectangle" << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    // Shape S;

    // Base class pointer
    Shape *s;
    // s = &S;
    // s->display();
    // Point to Circle object
    s = &c;
    s->display();

    // Point to Rectangle object
    s = &r;
    s->display();

    return 0;
}