//Create menu driven program for Pizza Shop.And display total amount

#include <iostream>
using namespace std;

int main()
{
    int a=90,b=100,c=110,d=120, z,total;
    cout<<"Pizza options\n1.Cheezy"<<endl;
    cout<<"2.Classic"<<endl;
    cout<<"3.Capsicum"<<endl;
    cout<<"4.Corn"<<endl;
    cout<<"Enter your choice:";
    cin>>z;
    switch (z)
    {
        case 1:
        {
            cout<<"Price of Chezzy:90rs"<<endl;
        }
        break;
        

        case 2:
        {
            cout<<"Price of Classic:100rs"<<endl;
        }
        break;
        
        case 3:
        {
            cout<<"Price of Capsicum:110rs"<<endl;
        }
        break;
        
        case 4:
        {
            cout<<"Price of Corn:120rs"<<endl;
        break;
        }
   
    }
     return 0;
}

