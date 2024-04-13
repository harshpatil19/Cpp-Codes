//Sum of even and odd number
#include <iostream>
using namespace std;
int main()
{
	int a,b,i,even=0,odd=0;
	cout<<"Enter Number:"<<endl;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		if(i%2==0)
		{
			even+=i;
		}
		else 
		{
			odd+=i;
		}
	}
	cout<<"Sum of Even number is:"<<even<<endl;
	cout<<"Sum of Odd number is:"<<odd<<endl;
	return 0;
	
}
