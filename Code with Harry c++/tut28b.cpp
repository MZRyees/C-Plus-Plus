#include<iostream>
using namespace std;
class Check1;
class Check{
    friend void exchange(Check &, Check1 &);
    int checkval;
    public:
    void setdata(int value){
        checkval = value;
    }
    void display(){
        cout<<checkval<<endl;
    }
};
class Check1{
    int check1val;
    public:
    friend void exchange(Check &, Check1 &);
    void setdata(int value){
        check1val = value;
    }
    void display1(){
        cout<<check1val<<endl;
    }
};
void exchange(Check & x, Check1 & y){
    int temp = x.checkval;
    x.checkval = y.check1val;
    y.check1val = temp;
}
int main()
{
Check oC; 
oC.setdata(23);
Check1 oC1;
oC1.setdata(9);
exchange(oC,oC1);
cout<<"The value of checkvalue after swap is:";
oC.display();
cout<<"The value of check1value after swap is:";
oC1.display1();
}