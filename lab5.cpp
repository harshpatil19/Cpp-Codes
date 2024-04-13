//Write a program to accept a number and check if it is divisible by 5 and 7.

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter Number:";
    cin>>a;
    if (a%5==0 && a%7==0)
    {
        cout<<"It is divisible"<<endl;
    }
    else
    {
       cout<<"It is not divisible"<<endl;
    }
    return 0;
}
