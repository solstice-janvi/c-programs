#include<iostream>
#include<conio.h>
using namespace std;

class a
{
	int a,b;
	public:
		void input()
		{
			cout<<"entyer value";
			cin>>a>>b;
		}
		friend void add(a obj);
};
void add(a obj)
{
	int c;
	c=ob.a+obj.b;
	cout<<c;
}
int main()
{
	a kk;
	kk.input();
	add(kk);
}
