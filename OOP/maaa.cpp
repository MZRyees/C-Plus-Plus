/*Write a C++ program demonstrating compile-time polymorphism
 by creating overloaded functions named print() that accept 
 an integer, a floating-point number, and a string*/

 #include<iostream>
 using namespace std;
 class Printer
	{
		public:
			void print(int value)
				{
				cout<<"Integer:"<<value<<endl;
				}
			void print(double value)
				{
				cout<<"Floating point:"<<value<<endl;
				}
			void print(string text)
				{
				cout<<"String: "<<text<<endl;
				}
	};
 int main()
		{
	Printer p;
	p.print(10);
	p.print(22.4);
	p.print("Maaz Ahmad");
		}