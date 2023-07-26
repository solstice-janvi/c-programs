#include<iostream>
using namespace std;
template<class t>
class show
{
	t a,b;
	public:
		show(t p,t q)
		{
			a=p;
			b=q;
		}
		void disp()
		{
			cout<<"a="<<a<<"b="<<b<<endl;
		}
};
int main()
{
	show <int> obj(10,20);
	obj.disp();
		
	
}
