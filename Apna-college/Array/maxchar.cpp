#include <iostream>
using namespace std;
int main ()
{

    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int currlgt=0;
    int maxlgt=0;
   

    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]!=32)currlgt++;
        maxlgt=max(currlgt,maxlgt);
    }
    cout<<maxlgt<<endl;
    return 0;
}