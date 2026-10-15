#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
ofstream out;
out.open("Sample61.txt");
cout<<"this is you:";
out.close();
ifstream in;
string st1, st2;
in.open("Simple62.txt");
// cout<<"Please enter the file id:"<<endl;
// cin>>st1>>st2;
// cout<<st1<<endl<<st2;
while (in.eof()==0)
{
    getline(in, st1);
    cout<<st1<<endl;
    in.close();
}

}