#include<iostream>
using namespace std;
class Test{
    int a,b;
    public:
    // Test(int x, int y): a(x), b(y){
        // Test(int x, int y): a(x), b(x+y)
        // Test(int x, int y): a(x), b(2*y)
        // Test(int x, int y): a(x), b(a+y)
        //  Test(int x, int y): b(y),a(x+b)-->Red falag This will create a problem because a initialized first
        Test(int x,int y)
        {
            a = x;
            b = y;
        cout<<"The Constructor is executed:"<<endl;
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
    }
};
int main(){
Test t(3,4);
}
/*
Sybtax for Initialization list in constructor
Constructor(arguments-list):initializer List Section {
Assignment +other code;
}
class Test{
int a, b;
Test(int i, int j): a(i), b(j){
Body of constructor
}
};
*/