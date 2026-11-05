#include<iostream>
using namespace std;
int main()
{
	int a=8;
	int b=5;
	int c=3;
	++a;
	b--;
	c++;
	int result=++a*b--* c++;
	cout<<"the final result is:"<<result;
}
