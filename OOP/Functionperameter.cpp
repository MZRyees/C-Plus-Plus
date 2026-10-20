#include<iostream>
using namespace std;
class Travel{
    float kilometer, hour;
    public:
    Travel(): kilometer(0), hour(0){ }
    void getData(){
        cout<<"Kindly Enter kilometer:"<<endl;
        cin>>kilometer;
        cout<<"Please also Enter the hours:"<<endl;
        cin>>hour;
    }
    void Display(){
        cout<<"Your Travelled "<<kilometer<<"kilometer"<<hour<<"hours"<<endl;
    }
     void Add(Travel T){
        Travel tempT;
        tempT.kilometer = T.kilometer+kilometer;
        tempT.hour = T.hour+hour;
        cout<<"Total travelling is:"<<tempT.kilometer<<"kilometer in "<<tempT.hour<<"hours"<<endl;
    }
};
int main()
{
       Travel car1,car2;
        car1.getData();
        car1.Display();
        car2.getData();
        car2.Display();
        car1.Add(car2);
}