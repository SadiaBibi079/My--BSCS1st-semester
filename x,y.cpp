#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int y=4;
	cout<<"the value of x:"<<x<<endl;
	x--;
	cout<<"the value of y:"<<y<<endl;
	++y;
	int result=x-- + ++y;
	cout<<"the result is:"<<result ;
}
