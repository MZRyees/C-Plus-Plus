#include<iostream>
#include<list>

using namespace std;
void display(list<int>&lst){
    list<int>::iterator iter1;
    for(iter1 = lst.begin();iter1!=lst.end();iter1++){
        cout<<*iter1<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> List1;//make the list of zero length.
    // list<int>List2(7);//make empty list of size 7.
    List1.push_back(9);
    List1.push_back(8);
    List1.push_back(6);
    List1.push_back(4);
    // list<int> ::iterator iter;
    // iter= List1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    //  iter++;
    // cout<<*iter<<" ";
    //  iter++;
    // cout<<*iter<<" ";
    //  iter++;
    // cout<<*iter<<" ";
    //  iter++;
    // cout<<*iter<<" ";
    display(List1);
    //Removing element from list
    // List1.pop_front();
    // List1.remove(9);
    // List1.pop_back();
    // Sorting the list
    // List1.sort();
    // display(List1);
    list<int>List2(4);
    list<int>::iterator iter;
    iter = List2.begin();
    *iter = 56;
    iter++;
    *iter = 8;
    iter++;
    *iter = 9;
    iter++;
    *iter = 89;
    iter++;
    display(List2);
    //sorting the list
    List1.sort();
    List2.sort();
    List1.merge(List2);
    cout<<"After merging:";
    display(List1);
    //Reversing the list
    List1.reverse();
    cout<<"Your reverse list is:";
    display(List1);

return 0;
}