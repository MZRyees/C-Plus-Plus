#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name;
 ofstream Nameout("Sample61.txt");//Connecting our program to Nameout file or stream
cout<<"Kindly Enter your name please:";
cin>>name;
Nameout<<name;
ifstream NameIn("Sample61b.txt");
string content;
cout<<"Please Kindly Enter the content:";
NameIn>>content;
cout<<"The content of the Connected file is:"<<content<<endl;
}