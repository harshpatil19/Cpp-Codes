//Check whether the number is palindrome or not?
#include <iostream>
using namespace std;
int main()
{
    int a,num,c,reverse;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    a=num;
    while(num!=0)
    {
        c=num%10;
        reverse=(reverse*10)+c;
        num=num/10;
        
    }
    if(a==reverse)
    {
        cout<<"It is Palindrome"<<endl;
    }
    else
    {
        cout<<"It is not a palindrome"<<endl;
    }
}
