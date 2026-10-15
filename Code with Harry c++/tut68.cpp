#include<iostream>
using namespace std;
// float Averfunction(float a, float b){
//     float average = a+b/2;
//     return average;
// }
// float Averfunction2(int a, int b){
//     float average = a+b/2;
//     return average;
// }
template<class T1,class T2>
float Averfunction(T1 a, T2 b){
    float average = a+b/2;
    return average;
}
int main()
{
float a;
a = Averfunction(3,4.5);
cout<<"The average of two float values are:"<<a<<endl;
}