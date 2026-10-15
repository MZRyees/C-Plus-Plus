#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(void);
    void printData(void){
        cout<<"Your complex number is:"<<a<<"+"<<b<<"i"<<endl;
    }
};
Complex::Complex(void){
    a = 6;
    b = 5;
}
int main()
{
  Complex c;
  c.printData();
  c.printData();
  c.printData();
}