#include<iostream>
using namespace std;
class Array{
    int array[5];
    public:
    void fill();
    void Display();
    int max();
    int min();
};
void Array::fill(){
    cout<<"Please Enter five values for array:";
    for(int i = 0;i<5;i++){
        cin>>array[i];
    }
}
void Array::Display(){
    for(int i = 0;i<5;i++){
        cout<<"The value at array["<<i<<"] is:"<<array[i]<<endl;
    }
}
int Array::max(){
int temp=array[0];
for(int i = 0; i <5;i++){
    if(temp<array[i])
    temp = array[i];
}
return temp;
}
int Array::min(){
    int temp1 = array[0];
    for(int i = 0; i <5;i++){
    if(temp1>array[i])
    temp1 = array[i];
}
return temp1;
}
int main()
{
    Array a;
    a.fill();
    cout<<"Your Entered values are:"<<endl;
    a.Display();
    cout<<"Your maximum enter array value is:"<<a.max()<<endl;
    cout<<"Your minimum enter array value is:"<<a.min()<<endl;
}