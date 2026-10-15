#include<iostream>
using namespace std;
/*
template<class T1, class T2>
class nameofclass{
body
}
*/
template<class T1, typename T2>
class Myclass{
    public:
    T1 data1;
    T2 data2;
    Myclass(T1 a, T2 b){
        data1 = a;
        data2= b;
    }
    void show(){
        cout<<"The value of data1 is:"<<this->data1<<"And Data2 is:"<<this->data2<<endl;
    }
};
int main()
{
Myclass<int, float>obj(6,4.55);
obj.show();
}