#include <iostream>
using namespace std;
class Y;
class X {
    private:
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X , Y );
};
class Y {
    private:
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X , Y );
};
void add(X o1, Y o2)
{
    cout << "Summing the value of the class object o1 and o2 gives me:" << o1.data+o2.num<<endl;
}
int main()
{
    X a1;
    a1.setValue(9);
    Y b1;
    b1.setValue(8);
    add(a1, b1);
}