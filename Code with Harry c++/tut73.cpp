#include<iostream>
#include<map>
#include<string>
using namespace std;
//Map is an associated array
int main(){
map<string, int>marksMap;
marksMap["Harrry"] = 89; 
marksMap["Rohit"] = 90;
marksMap["Zaki"] = 99;
map<string, int>::iterator iter;
for(iter=marksMap.begin();iter!=marksMap.end(); iter++)
{
cout<<(*iter).first<<" "<<(*iter).second<<" \n";
}
return 0;
}