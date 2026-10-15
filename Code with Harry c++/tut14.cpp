#include<iostream>
using namespace std;
      struct Student{//structure
     string name;
     int rollNO;
     float perc;
};
//Union in C++
union money{
    int rice;
    char car;
    float pound;
};
int main()
{
    //enum in c++
    enum Meal{Breakfast,launch, dinner};
    Meal M1 = Breakfast;
    cout<<M1<<endl;
    money m1;   //Union instance

       Student S1;//Structure instance
       S1.name="Muhammad Zaki";
       S1.rollNO= 511;
       S1.perc = 95;

       //union initialization
       m1.car = 'p';
       m1.rice= 120;
       //m1.pound = 500;
       //Accessing the value of union

       cout<<"The price of pound is:"<<m1.pound<<endl;
       cout<<"The Price of Rice is:"<<m1.rice<<endl;
       cout<<"The character of car is:"<<m1.car<<endl;
       
       //Structure value accessing
       cout<<"The name of student S1 is:"<<S1.name<<endl;
       cout<<"The Roll Number of Student S1 is:"<<S1.rollNO<<endl;
       cout<<"The mark percentage of Student S1 is:"<<S1.perc<<"%"<<endl;
}