#include<iostream>
using namespace std;
class Result{
    int roll_No;
    char Name[30];
    int marks[3];
    public:
    void input(){
        cout<<"Enter the name of student:"<<endl;
        cin>>Name;
        cout<<"Enter the Rool number:"<<endl;
        cin>>roll_No;
        for(int i = 0; i<3;i++){
            cout<<"Enter marks["<<i<<"]"<<endl;
            cin>>marks[i];
        }
    }
    void show(){
        cout<<"YOur Name is:"<<Name<<endl;
        cout<<"You RollNUmber is:"<<roll_No<<endl;
        for(int i = 0; i<3;i++){
            cout<<"Your enter subject marks["<<i<<"]:"<<marks[i]<<endl;
        }
        }
        int total(){
            int t=0;
          for(int i = 0; i<3;i++){
            t=t+marks[i];
        }
        return t;
        }
        float average(){
            float ave;
            for(int i = 0; i<3;i++){
            ave = ave+marks[i]/3.0;
        }
        return ave;
        }
};
int main()
{
    Result R1;
    R1.input();
    R1.show();
    R1.total();
    R1.average();
    cout<<"Total marks are:"<<R1.total()<<endl;
    cout<<"Average of your marks are:"<<R1.average()<<endl;
}