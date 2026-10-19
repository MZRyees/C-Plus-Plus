#include<iostream>
using namespace std;
class TV{
    int Retail_Price = 19000;
    string Brand_Name ="Samsung", Model= "2009";
public:
    void show(){
    cout<<"your Reatail Price is:"<<Retail_Price<<endl;
    cout<<"Your Brand Name is:"<<Brand_Name<<endl;
    cout<<"YOUr Model is:"<<Model<<endl;
    }
    void Change(string b, string m,int p){
        Brand_Name = b;
        Model = m;
        Retail_Price = p;
    }
};
//Talha
int main()
{
TV T1;
T1.show();
T1.Change("Lg", "2010", 20000);
cout<<endl<<endl;
T1.show();
}