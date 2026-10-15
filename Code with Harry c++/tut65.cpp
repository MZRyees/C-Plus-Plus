#include<iostream>
using namespace std;
template<class T>
class vector{
    public:
    T *arr;
    int size;
    vector(int m){
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v){
        T d = 0;
        for (int i = 0;i<size;i++)
        {
            d +=this->arr[i] * v.arr[i];
        }
         return d;
    }
};
int main()
{
    vector<int> V1(3);
    V1.arr[0] = 1;
    V1.arr[1] = 2;
    V1.arr[2] = 3;
    V1.arr[3] = 2;
    vector<double> V2(3);
    V1.arr[0] = 1.2;
    V1.arr[1] = 2.4;
    V1.arr[2] = 3.0;
    V1.arr[3] = 1.6;
    int a = V1.dotProduct(V2);
     cout<<"The dot Product of V1 and V2 is:"<<a<<endl;
     return 0;
}