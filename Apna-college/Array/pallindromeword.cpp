#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
            check=0;
            break;
        }
    }
    if(check==true)
    {
        cout<<"word is a pallindrome"<<endl;
    }
    else
    {
        cout<<"not a pallindrome";
    }
    return 0;
}