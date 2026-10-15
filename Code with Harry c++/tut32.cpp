#include<iostream>
using namespace std;
class Simple{
    int data1,data2;
    public:
    Simple(int a, int b = 7){
        data1 = a;
        data2 = b;
    }
    void showdata();
};
void Simple::showdata(){
    cout<<"Your enter data are: "<<data1<< " and " <<data2<<endl;
}
int main()
{
Simple S(9);
S.showdata();
}