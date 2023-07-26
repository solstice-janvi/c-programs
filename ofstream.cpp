#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	int n;
	char name[20];
	ofstream ofn;
	ofn.open("C:\\Users\\vansh\\Desktop\\filename.txt");
	cout<<"enter age and name :";
	cin>>n>>name;
	ofn<<n<<name;
	ofn.close();
	return 0;
}
