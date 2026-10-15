 #include<iostream>
 using namespace std;
 class Student {
private:
string name;
int rollNumber;
static int count;
public:
void setData(){
    cout<<"Please enter the Name of the student:";
    cin>>name;
    cout<<"Please enter the roll number of the student:";
    cin>>rollNumber;
    count++;
}
void getData(){
     cout<<"The name of the student is:"<<name<<endl;
    cout<<"The Roll Number of the student is:"<<rollNumber<<"And the serial number is:"<<count<<endl;
}
static void getCount(){
    cout<<"The value of count is:"<<count<<endl;
}
 };
int Student::count;
 int main()
 {
Student S1,S2,S3;
 S1.setData();
 S1.getData();
  Student::getCount();

 S2.setData();
 S2.getData();
  Student::getCount();

 S3.setData();
 S3.getData();
 Student::getCount();
 //Static member function is such type of function which is used to access the static data of the class and member function of a class
//it can't acces the normal data member or member function of a class
}
