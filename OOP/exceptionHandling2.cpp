#include<iostream>
using namespace std;
int main(){
    try{
        int check;
        cout<<"please enter the value of check:";
        cin>>check;
        if(check ==1){
            throw 9;
        if(check==2)
            throw 7.8;
        }
    }
    catch(int value){
        cout<<"The value is:"<<value<<endl;
    }
    catch(float vaal){
        cout<<"The vaal is:"<<vaal<<endl;
    }
    cout<<"Continiue:";
    return 0;
}