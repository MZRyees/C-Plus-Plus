#include<iostream>
using namespace std;
 class Shape{
        public:
        const int pi = 3.14;
       virtual void Area(){}
    };
    class Circle:public Shape{
        public:
        void Area()override{
            float radius = 9;
            cout<<"Area of Circle is:"<<pi*radius*radius<<endl;
        }
    };
    class Triangle:public Shape{
        public:
        void Area()override{
            float length = 6;
            float width = 8;
            cout<<"Area of Triangle is:"<<length*width<<endl;
        }
    };
int main(){
   Shape *S;
   Circle C;
   Triangle T;
    S = &C;
    S->Area();
    S = &T;
    S->Area();
    return 0;
}