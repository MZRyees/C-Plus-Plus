#include<iostream>
#include<math.h>
using namespace std;
class Distance{
private:
int x1,x2,y1,y2;
public:
Distance(int a, int b, int c,int d);
void DistanceFormula(){
    double Dist= sqrt ( pow(x2-x1,2))+(pow(y2-y1,2));
    cout<<"The distance is:"<<Dist<<endl;
}
};
Distance::Distance(int a, int b, int c,int d){
 x1=a;
 x2=b;
 y1=c;
 y2=d;
}
int main(){
Distance D(1,0,0,1);
D.DistanceFormula();
}