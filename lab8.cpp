//Write a program to input angles of a triangle and check whether triangle is valid or not

#include <iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    cout<<"Enter angle of triangle:"<<endl;
    cin>>a>>b>>c;
    sum=a+b+c;
    if (sum==180)
    {
        cout<<"Triangle is Valid"<<endl;
    }
    else
    {
        cout<<"Triangle is Not valid"<<endl;
    }
}
