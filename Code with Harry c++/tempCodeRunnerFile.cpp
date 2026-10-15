template<class X>
class Simple{
public:
X data;
Simple( X a){
    data = a;
}
void display();
};
template<class T>
void Simple<T>::display(){
    cout<<"The float value of Data is:"<<data<<endl;
}