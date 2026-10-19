#include<iostream>
using namespace std;
class Student{
    int a,b, c;
    public:
    void input(){
        cout<<"Please Enter the Marks of the student:"<<endl;
        cin>>a>>b>>c;
    }
    int Sum(){
        return a+b+c;
    }
    float Average(){
        return a+b+c/3.0;
    }
};
int main()
{
    Student Ali,Ahmad;
    Ali.input();
   cout<<"Your Sum is="<< Ali.Sum()<<endl;
    cout<<"Your Average="<<Ali.Average()<<endl;
    Ahmad.input();
   cout<<"Your Sum is="<< Ahmad.Sum()<<endl;
    cout<<"Your Sum is="<< Ali.Sum()<<endl;
    cout<<"Your Average="<<Ahmad.Average();
}