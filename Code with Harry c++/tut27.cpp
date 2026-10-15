#include <iostream>
using namespace std;
class Complex;
class Culculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int RealSum(Complex, Complex);
    int CompSum(Complex,Complex);
};
class Complex
{
    int a, b;
    // friend int Culculator::RealSum(Complex o1, Complex o2);
    // friend int Culculator::CompSum(Complex o1, Complex o2);
      friend class Culculator;
public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void PrintData()
    {
        cout << "Your Complex Number is:" << a << "+" << b << "i" << endl;
    }
};
int Culculator::RealSum(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}
int Culculator::CompSum(Complex o1, Complex o2){
    return(o1.b+ o2.b);
}
int main()
{
    Complex c1, c2;
    c1.setData(2, 5);
    c1.PrintData();
    c2.setData(9, 7);
    c2.PrintData();
    Culculator culc;
    int result = culc.RealSum(c1, c2);
    cout << "The real part of the complex number is:" << result << endl;
    int resultc = culc.CompSum(c1, c2);
    cout << "The imagenary  part of the complex number is:" << resultc << endl;
}