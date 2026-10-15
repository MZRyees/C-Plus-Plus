#include<iostream>
int sum(int a, int b){
    int c = a+b;
    return c;
}
void swap(int c, int d){
    int temp= c;
    c = d;
    d = temp;
}
void swapPointer(int *r, int *s){
    int temp = *r;
    *r = *s;
    *s = temp;
}
void SwapPointerVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
using namespace std;
int main()
{
    int x= 2,y = 5;
// cout<<"The sum is :"<<sum(x, y)<<endl;
// cout<<"The value of a and b before swap is:"<<x<<" "<<y<<endl;
// //it does not work
// swap(x,y);
// cout<<"The Swap values are:"<<x<<" "<<y<<endl;
// swapPointer(&x,&y);
// cout<<"The sapPointer values are:"<<x <<" "<<y<<endl;
SwapPointerVar(x,y);
cout<<"By using Swap Pointer Variable The value of X is:"<<x<<" And the value of Y is:"<<y<<endl;
}