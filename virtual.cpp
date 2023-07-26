#include<iostream>
#include<conio.h>
using namespace std;
class a
{
	public:
//		virtual void func()=0;
		virtual void show();
		
};
class b:public a{
	public:
		virtual void show()
		{
			cout<<"hello";
		}
};
int main()
{
	b obj;
	obj.show();
}
