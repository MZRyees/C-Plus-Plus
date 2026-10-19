#include<iostream>
using namespace std;
class Book{
    int bookId, Pages;
    float price;
    public:
    void get(){
        cout<<"kindly enter the book Id:";
        cin>>bookId;
        cout<<"kindly enter the pages:";
        cin>>Pages;
        cout<<"kindly enter the price:";
        cin>>price;
    }
    void show(){
        cout<<"The Book id is:"<<bookId<<endl;
        cout<<"The Book Pages are:"<<Pages<<endl;
        cout<<"The price of the book is:"<<price<<endl;
    }
     void Set(int a, int b, float c){
        bookId = a;
        Pages = b;
        price = c;
    }
    float getPrice(){
        return price;
    }
};
int main()
{
Book b1,b2;
b1.get();
b2.Set(1,44,150);
cout<<"\n The detail of book is:"<<endl;
if(b1.getPrice()>b2.getPrice()){
    b1.show();
}
else 
b2.show();
}