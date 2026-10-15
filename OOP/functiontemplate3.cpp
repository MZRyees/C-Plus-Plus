#include <iostream>
using namespace std;
template <typename T>
T larger(T a, T b) {
 if (a > b)
 return a;
 else
 return b;
}
int main() {
 cout << larger(4, 9) << endl;
 cout << larger(2.5, 1.8) << endl;
 cout << larger('A', 'Z') << endl;
 return 0;
}