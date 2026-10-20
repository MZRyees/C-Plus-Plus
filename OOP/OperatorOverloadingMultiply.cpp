#include<iostream>
using namespace std;
class Multiply
{
    int a,b;
    public:
    Multiply(int c=0, int d=0){
        a = c;
        b = d;
    }
    void  operator*(Multiply R){
        Multiply tempo;
        tempo.a = R.a *a;
        tempo.b = R.b * b;
        cout<<"The Product of obj 1 is:"<<tempo.a<<"And The Product of obj2 is:"<<tempo.b<<endl;
    }
};
int main()
{
    Multiply obj1(12,2),obj2(9,8);
    obj1*obj2;
}







