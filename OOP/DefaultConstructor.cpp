#include<iostream>
using namespace std;
class Book{
    float price, pages;
    string title;
    public:
    void input(){
        cout<<"Enter the price of the book:"<<endl;
        cin>>price;
        cout<<"Kindly enter the Number of pages:"<<endl;
        cin>>pages;
        cout<<"Please Enter the Tittle of the Book:"<<endl;
        cin>>title;
    }
    void show(){
        cout<<"The Price of the book is:"<<price<<endl;
        cout<<"The Number of the pages:"<<pages<<endl;
        cout<<"The Title of the book is:"<<title<<endl;
    }
};
int main()
{
    Book b1;
    b1.input();
    Book b2(b1);
    cout<<"The Detail of book one is:"<<endl;
    b1.show();
    Book b3 = b1;
    cout<<"The detail of book 2 is:"<<endl;
    b2.show();
    cout<<"The Detail of book 3 is:"<<endl;
    b3.show();
}