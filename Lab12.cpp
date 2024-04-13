//Sum of series :	1+2+3+�.+n
#include <iostream>
using namespace std;
int main()
{
    int i,sum=0,num;
    cout<<"Enter Number:";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    cout<<" Sum of series="<<sum<<endl;
    return 0;
}
