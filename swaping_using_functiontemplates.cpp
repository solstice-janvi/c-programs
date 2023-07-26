#include<iostream>
#include<conio.h>
using namespace std;
template <class t>
void show(t a,t b)
{
	t temp;
	temp= a;
	a=b;
	b=temp;
	cout<<"a="<<a;
	cout<<"b="<<b;
}
int main()
{
	int a,b;
	a=10;
	b=20;
	show(a,b);
    return 0;	
}
