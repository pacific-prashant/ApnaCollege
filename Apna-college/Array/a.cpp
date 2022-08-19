#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int  a[6]={1,2,3,4,5,6};
    int n=6;
    int b[6];
    for(int i=0;i<n/2;i++)
    {
        a[i]=a[n-i-1]*n + a[i];
    }
      for(int i=0;i<n/2;i++)
    {
       cout<<a[i]/6<<" ";
    }
    for(int i=n/2-1;i>=0;i--)
    {
        cout<<a[i]%6<<" ";
    }


    return 0;
}