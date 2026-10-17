#include<iostream>
using namespace std;
int main()
{
    int a=4, b=0;
    try{
        if(b==0){
            throw"Not allowed Divisible by 0";
        }
        cout<<a/b<<endl;
    }
    catch(const char *message){
        cout<<"Error:"<<message<<endl;
        cout<<"Program continues:"<<endl;
    }
    return 0;
}