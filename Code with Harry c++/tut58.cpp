#include <iostream>
#include <fstream>
/*The useful classes for wrking with files in C++ are
1. fstreambase
2. ifstream-->it is Derived from fstream base class
3. ofstream-->it is also derived from fstream base class
In order to work with files in C++
there are two ways to open a file in
C++
1. using the constructor
2. using member function open() of the class
*/
using namespace std;
int main()
{
    string st2;
   // open files using counstructor and reading it
     string st="Zaki Ryees khan";
     ofstream out("simple file");//Declared a constructor with name out which is used to carry the message from real program to a file
     out<<st;
    ifstream inn("simple file2");
    getline(inn, st2);
    inn >> st2;
    cout << st2;
    return 0;
}