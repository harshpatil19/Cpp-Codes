//Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
//(Hint: a, e, i, o, u are vowels)

#include <iostream>
using namespace std;

int main()
{
    char charc;
    cout<<"Enter character:"<<endl;
    cin>>charc;
    if (charc== 'a' || charc=='e' || charc=='i' || charc=='o' ||  charc=='u')
    {
        cout<<"It is a vowel"<<endl;
        
    }
    else
    {
        cout<<"It is a consonent"<<endl;
    }
    return 0;
}