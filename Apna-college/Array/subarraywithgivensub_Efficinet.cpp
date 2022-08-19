#include <iostream>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    {
        cin>>arr[i];
    }
    int i=0,j=0;
    while(i<=n && j<n)
    {
      if(sum<s)
      {
          sum=sum+arr[i];
          i++;
      }
      if(sum>s)
      {
          sum=sum-arr[j];
          j++;
      }
      if(sum==s)
      {
          cout<<j+1<<i;
          break;
      }
    }
    return 0;
}