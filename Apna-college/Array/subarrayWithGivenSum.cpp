#include <iostream>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int st=-1;
    int end=-1;
    int i=0,j=0;
    while(j<n && sum+arr[j]<=s)
    {
        sum=sum+arr[j];
        j++;
    }
    if(sum==s)
    {
        cout<<i<<" "<<j;
        return 0;
    }

    while(j<n)
    {
        sum=sum+arr[j];
        while(sum>s)
        {
            sum=sum-arr[i]; //i 1st element jisko delete krna hain
            i++;
        }
        if(sum==s)
        {
            st=i;
            end=j;
            break;
        }
        j++;
    }
    cout<<st<<" "<<end;
    return 0;
}