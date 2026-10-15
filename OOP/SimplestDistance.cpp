       /* Question:
    Write a C++ program using a class named Distance to add two distances
     given in feet and inches. If the total inches are 12 or more,
    convert the extra inches into feet.*/
#include<iostream>
using namespace std;
class  Distance{
    int feet;
    int inches;
    public:
    Distance(int f, int i){
            feet = f;
            inches = i;
    }
    void getData(int fe, int in){
        feet = fe;
        inches = in;
    }
    void Sum(){
        feet +=fe;
        inches +=in;
        if(inches>= 12){
            feet = feet+(inches/12);
            inches = inches%12;
        }
    }
    void Disply(){
        cout<<feet<<" feet "<<" and "<<inches<<" inches"<<endl;
    }
};
int main()
{
Distance d1(9,8);
d1.Sum(4,9);
cout<<"your output is:";
d1.Disply();
return 0;
}