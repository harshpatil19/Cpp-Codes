//Write program to print all prime number between 1 to n;
#include <iostream>
using namespace std;
int main()
{
	int i,j,num;
	bool flag=false;
	cout<<"Enter the Number:"<<endl;
	cin>>num;
	for(i=1;i<num;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=false;
				break;
			}
			else
			{
				flag=true;
			}
		}
		if(flag==true)
		{
			cout<<i<<endl;
		}
	}
}
