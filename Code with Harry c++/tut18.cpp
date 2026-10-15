#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n* factorial(n-1);
}
// Recursive function is such type of function which is automatically called itself.
int fab(int n){
    if(n<2){
        return 1;
    }
    return fab(n-2)+fab(n-1);
}
int main()
{
int x;
cout<<"Please Enter the value of x:";
cin>>x;
// cout<<"The factorial of a number "<<x <<" is "<<factorial(x)<<endl;
cout<<"The fabonache series at point "<<x
<<" is "<<fab(x)<<endl;
}