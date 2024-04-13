/*Write a program, which accepts two integers and an operator as a character 
(+ - * / ), performs the 
corresponding operation and displays the result.*/

#include <iostream>
using namespace std;
int main()
{
    int a,b,c,res;
    char ch;
    cout<<"Enter No1:";
    cin>>a;
    cout<<"Enter No1:";
    cin>>b;
    cout<<"Enter operator:\n1.Add\n2.Substract\n3.Divide\n4.Multiply"<<endl;
    cin>>c;
    
    switch(c)
    {
        case 1:
        {
            res=a+b;
            cout<<"Addition:"<<res<<endl;
        }
        break;
        
        case 2:
        {
            res=a-b;
            cout<<"Substract:"<<res<<endl;
        }
        break;
        
        case 3:
        {
            res=a/b;
            cout<<"Division:"<<res<<endl;
        }
        break;
        
        case 4:
        {
            res=a*b;
            cout<<"Multilpication:"<<res<<endl;
        }
        break;
    }
    return 0;
}