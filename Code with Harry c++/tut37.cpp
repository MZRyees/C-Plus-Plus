#include<iostream>
using namespace std;
class Employ{
    string name;
    int id;
     public:
    Employ( string n, int rl){
          name= n;
          id = rl;
    }
    void show(){
        cout<<"your name is:"<<name<<endl<<"your id is:"<<id<<endl;
    }
    Employ(){}
};
class programmer : public Employ{
    public:
int experience = 9;
void print(){
    cout<<"The experience of the programmer is:"<<experience<<" years"<<endl;
    show();
}
};
int main(){
    Employ e1("Ali", 44);
    e1.show();
    programmer Ali;
    Ali.print();
    Ali.show();
    
}