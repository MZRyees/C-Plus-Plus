#include<iostream>
using namespace std;
class Base{
protected:
int a;
private:
int b;
};
class Derived :Base{

};
int main(){
Base B;
Derived D;
// cout<<B.a<<B.b;
// cout<<D.a<<D.b;

}