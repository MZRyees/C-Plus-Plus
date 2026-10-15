#include<iostream>
using namespace std;
class Student{
    protected:
    int RollNumber;
    public:
    void setRollNo(int);
    void getRollNo();
};
void Student ::setRollNo(int r){
    RollNumber = r;
}
void Student ::getRollNo(){
    cout<<"Your Roll Number is:"<<RollNumber<<endl;
}
class Exam:public Student{
    protected:
    float math, physics;
    public:
    void setMarks(float, float);
    void getMarks();
};
void Exam::setMarks(float m1,float m2){
    math = m1;
    physics = m2;
}
void Exam::getMarks(){
    cout<<"Your marks in maths are:"<<math<<"and pysics are:"<<physics<<endl;
}
class Result: public Exam{
    float percentage;
     public:
    void displayResult(){
        getRollNo();
        getMarks();
     cout<<"The percentage is:"<<(math+physics)/2<<endl;
     }
};
int main(){
        Result Ali;
        Ali.setRollNo(01);
        Ali.setMarks(99.0,98.5);
        Ali.displayResult();
}