#include<iostream>
using namespace std;
class Test{
    private:
    int a;
    public:
    void Input(){
        cout<<"Kindly enter the value:"<<endl;
        cin>>a;
    }
    void Out(){
        cout<<"The Enter value is:"<<a<<endl;
    }
};
int main(){
    cout<<"Welcome:"<<endl;
    Test obj;
    obj.Input();
    obj.Out();
}