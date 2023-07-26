#include<iostream>
#include<conio.h>
using namespace std;
template <class t>
void swap(t &a,t &b)
{
	t temp;
	temp= a;
	a=b;
	b=temp;
}
int main()
{
	int a,b;
	a=10;
	b=20;
	swap(a,b);
	cout<<"a="<<a;
	cout<<"b="<<b;
	return 0;
}
