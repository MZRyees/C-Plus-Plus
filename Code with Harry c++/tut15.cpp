#include<iostream>
using namespace std;
int Sum(int a,int b );
int main()
{
    int numb1,numb2,sum;
    cout<<"Please Enter the first Number:";
    cin>>numb1;
    cout<<"Please enter The Second Number:";
    cin>>numb2;
    cout<<"The sum is :"<<Sum(numb1,numb2);
}
int Sum(int x, int y)
{
    return x+y;
}