#include<iostream>
using namespace std;
class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnvalue;
    public:
    BankDeposit(){}
    BankDeposit(int, int, float);
    BankDeposit(int, int, int);
    void show();
};
BankDeposit::BankDeposit(int p, int y, float I){
    principal = p;
    years = y;
    interestRate = I;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue=returnvalue*(1+interestRate);
    }
    
}
BankDeposit::BankDeposit(int p, int y,int I){
    principal = p;
    years = y;
    interestRate= float(I)/100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue=returnvalue*(1+interestRate);
    }
    
}
void BankDeposit::show(){
    cout<<"Pricipal amount was: "<<principal<<" return value after "<<years<<" years is"<<returnvalue<<endl;
}
int main(){
BankDeposit BD1,BD2,Bd3;
Bd3.show();
int p,y;
float I;
int i;
cout<<"Enter the value of P, Y and I:"<<endl;
cin>>p>>y>>I;
BD1 = BankDeposit(p,y,I);
BD1.show();
cout<<"Enter the value of P, Y and I:"<<endl;
cin>>p>>y>>i;
BD2 = BankDeposit(p,y,i);
BD2.show();
}