#include<iostream>
#include<string.h>
using namespace std;
class CWH{
protected:
string title;
float rating;
public:
CWH(string t, float r){
    title = t;
}
void virtual disply(){}
};
class CWHVideo:public CWH{
float videolength;
public:
CWHVideo(string t, float r, float vl):CWH(t,r){
    videolength = vl;
    rating = r;
}
void display(){
    cout<<"This is amazing video with title:"<<title<<endl;
    cout<<"The rating of this video is "<<rating<<" out of 5 stars:"<<endl;
    cout<<"The length of this video is:"<<videolength<<"minutes"<<endl;
}
};
class CWHText:public CWH{
int words;
public:
CWHText(string t, float r, int WC):CWH(t,r){
    words = WC;
    rating = r;
}
void display(){
    cout<<"This is amazing Text with title:"<<title<<endl;
    cout<<"The rating of this text tutorial is "<<rating<<" out of 5 stars:"<<endl;
    cout<<"The number of word in this text tutorial is:"<<words<<endl;
}
};

int main(){
   string title;
   float rating , vlength;
   int words;
   //for video
   title = "django Tutorial";
   rating = 4.77;
   vlength = 7.5;
    CWHVideo djvideo(title, rating , vlength);
    // djvideo.display();
    //for text tutorial
    title = "django Text Tutorial";
   rating = 4;
   words = 200;
    CWHText djtext(title,rating,words);
    // djtext.display();
    CWH* tut[2];
    tut[0]= &djvideo;
    tut[1]= &djtext;
    tut[0]->disply();
    tut[1]->disply();
return 0;
}