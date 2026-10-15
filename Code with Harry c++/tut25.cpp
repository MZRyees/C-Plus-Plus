#include<iostream>
using namespace std;
class Employee{
int id;
int salary;
public:
void SetId(){
    salary = 1200;
    cout<<"Please Enter the Id of Employee:";
    cin>>id;
}
void GetData(){
    cout<<"The id of the Employee is:"<<id<<endl;
    cout<<"The Salary of employee per day is:"<<salary<<endl;
}
};
int main()
{
Employee Ryees[4];
for (int  i = 0; i < 4; i++)
{
    Ryees[i].SetId();
    Ryees[i].GetData();
}

}