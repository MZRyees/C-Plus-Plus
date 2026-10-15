#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int sum (int a, int b, int c){
    return a+b+c;
}
float volume(int r , int h){
    return (3.14*r*r*h);
}
float volume(int a){
    return(a*a*a);
}
float volume(int l, int w, int h){
    return(l*w*h);
}
int main(){
   cout<<"The sum of 2 and 8 is:"<< sum(2,8)<<endl;
   cout<<"The sum of 2,8 and 12 is:"<<sum(2,8,12)<<endl;
   cout<<"The volume of cylinder is :"<<volume(2,4)<<endl;
   cout<<"The volume of cuboid is:"<<volume(6)<<endl;
   cout<<"The Area of Rectangle is:"<<volume(2, 4,7)<<endl;
}