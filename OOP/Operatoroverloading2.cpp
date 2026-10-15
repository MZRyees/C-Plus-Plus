#include<iostream>
using namespace std;
class Complex{
     public:
    int imagenary,real;
    Complex(int x, int y): real(x),imagenary(y){} 
    Complex operator *(Complex a){
        Complex temp(0,0);
        temp.real = real*a.real;
        temp.imagenary = imagenary*a.imagenary;
        return temp;
    }
};
int main()
{
    Complex C1(9,6);
    Complex C2(4,5);
    Complex C3 = C1 * C2;
    cout<<"Your Complex number is:"<<endl;
    cout<<C3.real <<"+"<<C3.imagenary<<"i"<<endl;
}