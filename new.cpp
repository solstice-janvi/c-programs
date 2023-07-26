#include<iostream>
#include<conio.h>
using namespace std;
class a{
	public:
		a(){
		int *p=NULL;
		p= new int;
		*p=20;
		cout<<"value:"<<p;
		
}
};
int main()
{
	a obj;
}
