#include<iostream>
using namespace std;
class Student{
int rollNumber;
public:
Student(){
    rollNumber = 0;
}
Student(int R){
        rollNumber = R;
}
// Student(Student &obj){
//     cout<<"Copy constructor is called:"<<endl;
// rollNumber= obj.rollNumber;
// }
void show(){
    cout<<"The Roll Number is:"<<rollNumber<<endl;
    cout<<"the copy constructor is called:"<<endl;
}
};
int main()
{
Student x,y,z(45);
z.show();
x.show();
y.show();
Student s1(x);
s1.show();
z.show();
return 0;
}