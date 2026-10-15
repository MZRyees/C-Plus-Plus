#include<iostream>
#include<vector>
using namespace std;
template <class T>
  void display(vector <T> &v){
    cout<<"Displaying this vector"<<endl;
        for(int i= 0; i<v.size(); i++) 
        {
            cout<<v[i]<<" ";
             cout<<v.at(i)<<" ";
        }
        cout<<endl;
    }
int main()
{
//     //Ways to create a vector
// vector<int> vec1;//Zero length integer vector
// vector<char>vec2(4); // 4-Elements character vector
// vector<char>vec3(vec2);//4_Elements character vectorfrom vec2
// vector<int>vec4(6,3);//6-elements of vector of 3s
// display(vec1);
// vec2.push_back('5');
// display(vec2);
// display(vec3);
vector<int>vec4(4,6);
display(vec4);
cout<<vec4.size();
int element,size=5;
// cout<<"Kindly enter the size of the vector:"<<endl;
// cin>>size;
// for(int i=0;i<size;i++)
// {
//     cout<<"Enter element to add this vector:"<<endl;
//     cin>>element;
//     vec1.push_back(element);
// }
    // vec1.pop_back();
    // vector<int>::iterator iter = vec1.begin();
    // // vec1.insert(iter+1,5,566);
    // display(vec1);
    return 0;
}