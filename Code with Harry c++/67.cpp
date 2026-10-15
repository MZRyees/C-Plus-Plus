#include<iostream>
using namespace std;
template<typename X1 = int , typename X2 = float, typename X3 = char>
class Zaki{
    public:
     X1 a;
     X2 b;
     X3 c;
     Zaki( X1 s, X2 t, X3 u){
        a = s;
        b = t;
        c = u;
     }
     void dispaly(){
        cout<<"The vlue of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
        cout<<"The value of c is:"<<c<<endl;
     }
};
int main()
{
Zaki <>z(9 , 9.999,'o');
z.dispaly();
cout<<endl;
Zaki <float, char, int>d(9.999,'Z',99);
d.dispaly();
}
