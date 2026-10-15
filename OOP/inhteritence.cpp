#include<iostream>
using namespace std;
class Person{
    int id;
    char Name[100],Adress[100];
    public:
    void setData(){
        id = 0;
        Name[0] = '/0';
        Adress[0] = '/0';
    }
    void getInfo(){
        cout<<"Please enter your Personal information:"<<endl;
        cout<<"kindly Enter you name:";
        cin>>Name;
          cout<<"Kindly enter your Adrees:";
          cin>>Adress;
         cout<<"Kindly Enter your  id:";
         cin>>id;
    }
    void showData(){
        cout<<"Your name is:"<<Name<<endl;
        cout<<"Your id is:"<<id<<endl;
        cout<<"Your Adress is:"<<Adress<<endl;
    }
};
class Student:public Person{
int rollNum;
int marks;
public:
Student(){
    person:Person();
    rollNum= marks=0;
}
void getEdu(){
    cout<<"please enter Roll Number:";
    cin>>rollNum;
    cout<<"Kindly Enter your marks:";
    cin>>marks;
}
void showEdu(){
    cout<<"Your Roll Number is:"<<rollNum<<endl;
    cout<<"your marks are:"<<marks<<endl;
}
};
int main()
{
Student s;
s.getInfo();
s.getEdu();
s.showData();
s.showEdu();

}