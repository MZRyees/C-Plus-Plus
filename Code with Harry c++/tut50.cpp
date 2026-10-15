#include<iostream>
using namespace std;
int main()
{
    int a = 20;
    int* ptr = &a;
    cout<<"The value of a is:"<<ptr<<endl;
    cout<<"The value of a is:"<<a<<endl;
    cout<<"The value of a is:"<<*(ptr)<<endl;
    //New KeyWord or operator
    // it is not nessecary to create only int data type we can create any type of data type through new operator
    int *p = new int (90);
     cout<<"The value at adress p is:"<<*(p)<<endl;
     float *arr = new float[3];
     *(arr+0)=10;
     arr[2] = 40; 
     arr[1] = 50;
      //Delete Operator or keyword
    //  delete[] arr;
     cout<<"The value of array at index 0 is:"<<arr[0]<<endl;
     cout<<"The value of array at index 1 is:"<<arr[1]<<endl;
     cout<<"The value of array at index 2 is:"<<arr[2]<<endl;
return 0;
}
/*
Basic example of pointer
Basically pointer is a variable which is used to store the adress of variable
*/
