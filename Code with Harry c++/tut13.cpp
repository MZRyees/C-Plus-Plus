#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int marks[] = { 12,23,44,55};
    marks[3]= 244;
    // cout<<"The marks are given:"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl; 
    while (i<4)
    {
        cout<<"The value of marks at ["<<i<< "] is "<<marks[i]<<endl;
        i++;
    }
    //pointers and arrays
      int *p = marks;
      cout<<"The value at [0] is:"<<*(p)<<endl;
      cout<<"The value at [1] is:"<<*(p+1)<<endl;
      cout<<"The value at [2] is:"<<*(p+2)<<endl;
      cout<<"The value at [3] is:"<<*(p+3)<<endl;
}