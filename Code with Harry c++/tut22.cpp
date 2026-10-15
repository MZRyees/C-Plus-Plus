//     OOP classes and Objects
//   C++ initally called as C with classes by stroustroup
//     classes have the extension of C
//     Structure had limitations
//     Members are public
//     No defined Method 
//     Classes = Structure +more
//     Classes have properties and methods
//     Classes make few members as public and few may private
//     Structure in C++ are Typedefed
//     You can declare objects with class decleration like this
//     Class A{
//         class definition
//     }Ali,Ahmad,Akbar;
//Nesting Member functions
#include<iostream>
#include<string>
using namespace std;
class Binary{
    string s;
    public:
    void getData(void);
    void chk_bin(void);
    void OnesComplement(void);
    void Display(void);
};
void Binary::getData(){
    cout<<"Enter any string:";
    cin>>s;
}
void Binary::chk_bin(){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Invalid Binary Format"<<endl;
            exit(0);
        }
    }
}
    void Binary::OnesComplement(){
        chk_bin();
         for (int i =0; i < s.length(); i++)
         {
            if(s.at(i)=='0'){
                s.at(i)='1';
            }
            else
            s.at(i) ='0';
            s.at(i);
         } 
        } 
         void Binary::Display(){
        for (int i = 0; i < s.length(); i++)
        {
              cout<<s.at(i);
        }
        cout<<endl;
        cout<<"The Number after ones Complement is:"<<endl;

    }  
int main()
{
    Binary b;
    b.getData();
    //b.chk_bin();
    b.Display();
    b.OnesComplement();
    b.Display();
}