#include<iostream>
#include<math.h>
using namespace std;
class SimpleCalculator{
    protected:
    int a, b;
    public:
    void setDataSimple(){
        cout<<"Please Enter the value of a:\n";
        cin>>a;
        cout<<"Please Enter the value of b:\n";
        cin>>b;
    }
    void PerfomOperation(){
      cout<<"The Value of a+b is:"<<a+b<<endl;
      cout<<"The Value of a-b is:"<<a-b<<endl;
      cout<<"The Value of a*b is:"<<a*b<<endl;
      cout<<"The Value of a/b is:"<<a/b<<endl;
    }
};
class ScientificCalculator{
    protected:
    float R;
    public:
    void setDataScientific(float);
    void performScientificopertion();
};
void ScientificCalculator::setDataScientific(float z){
    R = z;
}
void  ScientificCalculator:: performScientificopertion(){
    cout<<"The value of cos x is"<<cos(R)<<endl;
    cout<<"The Value of Sin x is:"<<sin(R)<<endl;
    cout<<"The value of Tan x is:"<<tan(R)<<endl;
    cout<<"The value of exponential function is:"<<exp(R)<<endl;
}
class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    
};
int main(){
//     cout<<"The simple caculator:"<<endl;
//     SimpleCalculator Simple;
// Simple.setData();
// Simple.PerfomOperation();
// cout<<"The Scientific Calculator:"<<endl;
// ScientificCalculator Scientific;
// Scientific.SetData(6);
// Scientific.performScientificopertion();
cout<<"The Hybrid Calculator:"<<endl;
HybridCalculator Hybrid;
Hybrid.setDataSimple();
Hybrid.PerfomOperation();
Hybrid.setDataScientific(5.0);
Hybrid.performScientificopertion();

}