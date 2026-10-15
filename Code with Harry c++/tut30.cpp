#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int , int);
    void printData(void){
        cout<<"Your complex number is:"<<a<<"+"<<b<<"i"<<endl;
    }
};
Complex::Complex(int x, int y){
    a = x;
    b = y;
}
int main()
{
    //implicit call
Complex C(1,3);
C.printData(); 
// Explicit Call
Complex a = Complex(8,9);
a.printData();
}