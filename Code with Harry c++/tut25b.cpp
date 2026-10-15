#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    void setData(int v1,int v2){
        a = v1;
        b = v2;
    }
    void SetDataBySum(Complex c1, Complex c2){
        a = c1.a+c2.a;
        b = c1.b+c2.b;
    }
    void print(){
        cout<<"Your complex number is:"<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
Complex C1,C2,C3;
C1.setData(2,3);
C1.print();
C2.setData(4,5);
C2.print();
C3.SetDataBySum(C1,C2);
C3.print();
}