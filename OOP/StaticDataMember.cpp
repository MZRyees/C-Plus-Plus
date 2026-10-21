#include<iostream>
using namespace std;
class Student{
   static int r1;
   int rollNo,Marks;
   char Name[30];
    public:
    Student(){
       r1++;
       rollNo = r1;
    }
    void input(){
        cout<<"Please enter you Name:";
        cin>>Name;
        cout<<"Kindly Enter you Marks:";
        cin>>Marks;
    }
    void show(){
        cout<<"YOur Name is:"<<Name<<" And Your Roll Number is:"<<rollNo<<" And also your Marks is:"<<Marks<<endl;
    }
};
int Student:: r1 = 0;
int main()
{
    Student S1,S2,S3;
    S1.input();
    S1.show();
    S2.input();
    S2.show();
    S3.input();
    S3.show();
    return 0;
}