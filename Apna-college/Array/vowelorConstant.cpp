#include <iostream>
using namespace std;
int main()
{
    char c;
    int lowercase;
    int uppercase;
    cout<<"Enter the character: ";
    cin>>c;
    lowercase = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    uppercase = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(lowercase||uppercase)
    {
        cout<<"vowel"<<endl;
    } 
    else
    {
        cout<<"Consonant"<<endl;
    }


    return 0;
}