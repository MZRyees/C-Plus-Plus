#include<iostream>
using namespace std;
template<class X>
class Simple{
public:
X data;
Simple( X a){
    data = a;
}
void display();
};
template<class T>
void Simple<T>::display(){
    cout<<"The float value of Data is:"<<data<<endl;
}
void func(int a){
    cout<<"I am first Func()"<<a<<endl;
}
template<class a>

void func(a x){
    cout<<"I am Templatized Func()"<<x<<endl;
}
int main()
{
//  Simple<float>S(9.99);
// //  cout<<"The value of data is:"<<S.data<<endl;
// S.display();
func(9);

}