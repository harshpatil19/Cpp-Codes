//Write a program to find factorial of a given number. ex:no5  fact=5*4*3*2*1=120
#include <iostream>
using namespace std;
int main()
{
    int a,i, fact=1;
    cout<<"Enter No:";
    cin>>a;
    for (i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial is:"<<fact<<endl;
    return 0;
}