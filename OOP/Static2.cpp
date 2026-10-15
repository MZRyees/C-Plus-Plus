#include<iostream>
using namespace std;
class Student{
    int rollNumber;
    static int SpecialRNo;
    public:
    Student(){
        rollNumber = 90;
        SpecialRNo++;
    }
    void show(){
        cout<<"The value of normal variable is:"<<rollNumber<<endl;
        cout<<"The value of Static variable is:"<<SpecialRNo<<endl;
    }
};
    int Student:: SpecialRNo = 4;
int main()
{
Student s1;
s1.show();
}