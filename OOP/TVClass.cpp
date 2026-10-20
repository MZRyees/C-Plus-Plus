#include<iostream>
using namespace std;
class TV{
    int Retail_Price;
    string Brand_Name, Model;
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
    TV(int x, string y, string z){
        Retail_Price = x;
        Brand_Name = y;
        Model = z;
    }
};
//Talha
int main()
{
    cout<<"Brand Before chaged:"<<endl;
TV T1(450000,"Lenovo", "2011");
T1.show();
cout<<"Brand After changed:"<<endl;
T1.Change("Lg", "2010", 20000);
T1.show();
}