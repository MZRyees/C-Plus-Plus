#include<iostream>
using namespace std;
class Num{
    int count=0;
    public:
    Num(){
        count++;
        cout<<"This is the time when constructor is called for object number:"<<count<<endl;
    }
    ~Num(){
        cout<<"This is the time when my distructor is called for count:"<<count<<endl<<count--<<endl;
    }
};
int main()
    {
cout<<"I am inside the main fucntion:"<<endl;
cout<<"Creating first object n1"<<endl;
Num n1;
{
cout<<"Entering this block:"<<endl;
cout<<"Creating two more objects:"<<endl;
Num n2,n3;
cout<<"Exiting this Block:"<<endl;  
}
cout<<"Back to main:"<<endl;
  }
