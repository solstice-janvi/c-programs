#include<iostream>
#include<conio.h>
using namespace std;
class a{
	public:
		a(){
			int *p= new int;
			*p=20;
		cout<<"value:"<<*p;
		
		delete p;
		
			cout<<"deleted";
		
}
};
int main()
{
	a obj;
}
