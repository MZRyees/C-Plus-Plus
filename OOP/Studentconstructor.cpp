#include<iostream>
using namespace std;
class Student{
    int mark;
    char grade;
    public:
    Student(int a, char b){
        mark = a;
        grade = b;
    }
    void show(){
        cout<<"Marks:"<<mark<<endl;
        cout<<"Grade:"<<grade<<endl;
    }
};
int main()
{
Student Ali(566,'A');
Student Ahmad(599, 'A');
cout<<"The Marks and grade of first student is:\n";
Ali.show();
cout<<"The marks and Grade of Second student is:\n";
Ahmad.show();
}