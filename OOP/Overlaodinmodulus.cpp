#include<iostream>
using namespace std;
class Modulus{
    float a,b;
    public:
     Modulus(float x,float y){
         a = x;
         b = y;
     }
     float operator%(Modulus m){
        Modulus temp(0,0);
        temp.a = (m.a)%a;
        temp.b = (m.b)%b+b;
         return temp.a;
     }
};
int main(){
    Modulus mod(9,8);
    Modulus mod1,mod2;

}