#include<iostream>
using namespace std;
class Student{
    char Name[100];
    public:
    void getDAta(){
        cout<<"Kindly enter your name:";
        cin>>Name;
    }
    friend void display(Student obj);
};
void display(Student obj){
    cout<<"The name is:"<<obj.Name<<endl;
}
int main()
{
Student s1;
s1.getDAta();
display(s1);
}