#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int x, int y){
        a = x;
        b = y;
    }
    void printvalues(){
        cout<<"Your complex number is:"<<a<<"+"<<b<<"i"<<endl;
    }
    Complex(int x){
        a = x;
        b = 0;
    }
    Complex(){
        a = 0;
        b = 0;
    }
};
int main(){
Complex C1(4,5);
C1.printvalues();
Complex C2(8);
C2.printvalues();
Complex C3;
C3.printvalues();
}