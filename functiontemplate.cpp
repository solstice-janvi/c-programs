#include<iostream>
using namespace std;
template<class t>
void show(t a,t b)
{
	cout<<"a"<<a<<endl<<b<<endl;
}
int main()
{
	int p=10,q=20;
	show(p,q);
}
