#include<iostream>
using namespace std;
class Complex{
    int real, imagenary;
    public:
  void setData(int a, int b){
    real = a;
    imagenary = b;
  }
    void printData(){
        cout<<"The real Part is:"<<real<<endl;
        cout<<"The Imagenary part is:"<<imagenary<<"i"<<endl;
    }
};
int main()
{
// Complex c1;
// Complex *ptr = &c1;
Complex *ptr = new Complex;
(*ptr).setData(40,2);
ptr->printData();
}