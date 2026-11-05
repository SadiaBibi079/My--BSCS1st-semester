#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int b=3;
	cout<<"the value of a:"<<a<<endl;
	++a;
	cout<<"the value of b:"<<b<<endl;
	b++;
	int c=a++ + b++;
	cout<<"the value of c:"<<c<<endl;
}
