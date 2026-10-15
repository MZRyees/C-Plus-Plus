#include<iostream>
using namespace std;
class Point{
    int x,y;
    public:
    Point(int, int);
    void displayPoint(void);
};
Point::Point(int a, int b){
    x = a;
    y = b;
}
void Point::displayPoint(){
    cout<<"The point in x coordinate is: " << x << "and y coordinate is: " << y<<endl;
}
int main(){
Point P(3,4);
P.displayPoint();
Point q(7,8);
q.displayPoint();
}
