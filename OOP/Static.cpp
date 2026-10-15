#include<iostream>
using namespace std;
class Test{
    static int count;
    public:
    static void show(){
        cout<<"The value of count is:"<<count;
    }
};
int Test::count = 12;
int main(){
Test::show();
}