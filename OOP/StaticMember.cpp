#include<iostream>
using namespace std;
class Yahoo{
     static int n;
     public:
      static void increament(){
        n++;
      }
      static void show(){
        cout<<"The value after increament is:"<<n<<endl;
      }
};
 int Yahoo::n = 30;
int main()
{
   Yahoo::increament();
   Yahoo::show();
}