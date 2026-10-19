#include<iostream>
using namespace std;
class Test{
    int a, b;
    public:
    void GetData(){
        cout<<"Enter the value of a:"<<endl;
        cin>>a;
        cout<<"Enter the value of b:"<<endl;
        cin>>b;
    }
    Test operator + (Test p){
       Test Temp;
       Temp.a = p.a+ a;
       Temp.b = p.b+ b;
       return Temp;
    }
};
int main()
{
    Test x,y,z;
    x.GetData();
    y.GetData();
    z = x+y;
}