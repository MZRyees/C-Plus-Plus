#include<iostream>
using namespace std;
class Division{
    float a,b;
    public:
    Division(float x,float y){
        a =x;
        b = y;
    }
    Division operator / (Division D){
        Division temp(0,0);
        temp.a = D.a/a;
        temp.b = D.b/b;
        return temp;
    }
    void Print(){
        cout<<"The division of a is:"<<a<<endl;
        cout<<"The division of b is:"<<b<<endl;
    }
};
int main(){
    Division d(10,20),d1(5,2);
    Division d3 = d/d1;
    d3.Print();
}