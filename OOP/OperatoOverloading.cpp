#include<iostream>
using namespace std;
class Count{
    int number;
    public:
    Count()
    {
        number = 0;
    }
    void show(){
        cout<<"You are Number is:"<<number<<endl;
    }
    Count operator ++(){
         number = number+1;
        Count temp;
        temp.number = ++number;
    }
};
int main(){
    Count x, y,z;
    x.show();
    y.show();
    x = ++y;
    x.show();
    y.show();
}