#include<iostream>
#include<conio.h>
using namespace std;
template <class t>
class show
{
	
	public:
		t a,b;
		show(t p,t q)
		{
			a=p;
			b=q;
			
			t temp;
			temp= a;
			a=b;
			b=temp;
		}
		void disp()
		{
			cout<<"a="<<a;
			cout<<"b="<<b;
		}
};
int main()
{
	show<int>obj1(10,20);
	obj1.disp();
    return 0;	
}
