#include<iostream>
using namespace std;
class Distance{
    private:
    int feet;
    int inches;
    public:
     Distance(int i, int f){
            inches= i;
            feet = f;
    }
    Distance(Distance d1, Distance d2)
    {
        d1.feet = d1.feet+d2.feet;
        d1.inches = d1.inches+d2.inches;
        if(inches>=12){
             d2.feet = feet+inches/12;
             d2.inches = inches % 12;
        }
    }
    void display(){
        cout<<feet<<" feet "<<"and "<<inches<<" inches"<<endl;
    }
};
int main()
{
Distance d1(4,5);
Distance d2(7,9);
Distance result(d1,d2);
result.display();
}