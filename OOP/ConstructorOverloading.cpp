#include<iostream>
using namespace std;
class over{
    int num;
    char ch;
    public:
    over(){
        num = 0;
        ch = 'x';
    }
    over(int a,char b)
    {
        num = a;
        ch = b;
        }
        void show(){
            cout<<"The Enter value of a is:"<<num<<endl;
            cout<<"The Enter value of b is:"<<ch<<endl;
        }
};
int main()
{
    cout<<"The content of first obj is:"<<endl;
    over cons1;
    cons1.show();
     cout<<"The content of the second obj is:"<<endl;
over cons(9,'L');
cons.show();
}