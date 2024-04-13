//Write a program to find greatest of three numbers using nested if-else.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 3 Numbers:"<<endl;
	cin>>a>>b>>c;
	
	if(a>b&&a>c)
	{
		cout<<"Num1 is greater"<<endl;
	}
	else if(b>a&&b>c)
	{
		cout<<"Num2 is greater"<<endl;
	}
	else
	{
		cout<<"Num3 is greater"<<endl;
	}
	return 0;
}
