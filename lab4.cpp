//Write a program to accept an integer and check if it is even or odd.

#include <iostream>
using namespace std;

int main()
{
  int a;
  cout<<"Enter Int Value:"<<endl;
  cin>>a;
  if(a%2==0)
  {
    cout<<"It is even"<<endl;
  }
  else
  {
    cout<<"It is odd"<<endl;
  }
}