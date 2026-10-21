#include<iostream>
using namespace std;
class Travel{
    int km;
    int hrs;
    public:
    Travel():km(0),hrs(0){}
    void GetData(){
        cout<<"Enter the kilometer you covered:"<<endl;
        cin>>km;
        cout<<"Enter the hours :";
        cin>>hrs;
    }
    Travel Add(Travel A){
        Travel Temp;
        Temp.km = A.km+km;
        Temp.hrs = A.hrs+hrs;
        return Temp;
    }
    void show()
        {
            cout<<"Your are travelled "<<km<<"Kilometer"<<hrs<<"in hours"<<endl;
        }
};
int main()
{
    Travel jeep,prado,r;
    jeep.GetData();
    jeep.show();
    prado.GetData();
    prado.show();
    r =jeep.Add(prado);
    cout<<"The total travelling is as follow:"<<endl;
    r.show();
    
}