#include<iostream>
using namespace std;
class Student{
protected:
int RollNumber;
public:
void setData(int a){
    RollNumber= a;
}
void PrintRollNo(){
cout<<"Your Roll Number is:"<<RollNumber<<endl;
}
};
class Test: virtual public Student{
    protected:
    float English, computer;
    public:
    void SetMarks(float m1, float m2){
        English = m1;
        computer = m2;
    }
    void PrintMarks(){
        cout<<"Your Marks in English Are:"<<English<<endl<< " And also Marks in computer are:"<<computer<<endl;
    }
};
class Sport: virtual public Student{
protected:
int Score;
public:
void SetScore(int sc){
    Score = sc;
}
void PrintScore(){
    cout<<"Your Scores in PT are:"<<Score<<endl;
}
};
class Result : public Test,public Sport{
    private:
    float Total;
    public:
    void Display(){
         Total = English+ computer+ Score;
        PrintRollNo();
        PrintMarks();
        PrintScore();
        cout<<"Your Total Score Are:"<<Total<<endl;
    }

};
int main()
{
    Result Zaki;
    Zaki.setData(001);
    Zaki.SetMarks(90,99);
    Zaki.SetScore(10);
    Zaki.Display();
}