#include<iostream>
using namespace std;
class Complex{
    int x,y;
public:
void setData(int a, int b){
    x = a;
    y = b;
}
 friend Complex SumComplex(Complex o1, Complex o2);
void GetData(){
    cout<<"Your Complex number is:"<<x<<"+"<<y<<"i"<<endl;
}
};
Complex SumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setData((o1.x + o2.x),(o1.y+o2.y));
    return o3;
}
int main()
{
Complex C1,C2,Sum;
C1.setData(1,2);
C1.GetData();
C2.setData(5,4);
C2.GetData();
Sum = SumComplex(C1,C2);
Sum.GetData();
}