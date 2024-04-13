/*Write a program, which accepts annual basic salary of an employee and calculates and displays the 
Income tax as per the following rules. 
Basic: < 1, 50,000 Tax = 0
 1, 50,000 to 3,00,000 Tax = 20% 
 > 3,00,000 Tax = 30% 
*/

#include <iostream>
using namespace std;

int main()
{
   int salary,tax;
   cout<<"Enter Salary:";
   cin>>salary;
   if(salary<150000)
   {
       cout<<"Tax=0%"<<endl;
   }
   else if( salary>150000 && salary<300000)
   {
       tax=(salary/100)*20;
       cout<<"Tax is 20%:"<<tax<<endl;
   }
   else if( salary>300000)
   {
       tax=(salary/100)*30;
       cout<<"Tax is 30%:"<<tax<<endl;
   }
    return 0;
}
