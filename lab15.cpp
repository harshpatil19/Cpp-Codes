//Write a program to enter a number and print its reverse.
#include <iostream>
using namespace std;
int main()
{
	int a,b,reverse=0;
	cout<<"Enter a Number:"<<endl;
	cin>>a;
	while(a!=0)
	{
		b=a%10;
		reverse=(reverse*10)+b;
		a=a/10;
	}
	cout<<"Reverse Number is:"<<reverse<<endl;
	return 0;
}
