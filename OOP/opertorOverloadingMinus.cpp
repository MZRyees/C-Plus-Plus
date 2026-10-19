#include <iostream>
using namespace std;

class Minus {
    int a, b;
public:
    // Constructor
    Minus(int x, int y) {
        a = x;
        b = y;
    }

    // Overloaded minus operator
    Minus operator - (const Minus &obj) {
        Minus temp(0, 0);
        temp.a = a - obj.a;
        temp.b = b - obj.b;
        return temp;
    }

    // Function to display the values
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    Minus obj1(23, 12);
    Minus obj2(12, 10);
    
    Minus obj3 = obj1 - obj2; // Calls operator -
    
    obj3.display(); // Output: a = 11, b = 2
    
    return 0;
}