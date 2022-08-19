//SunArrays contiguous part of array hota hain.
//program to print subarray from an array.
#include <iostream>
#include <climits>
using namespace std;   
int main()   
{
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i;j<n;j++)
    //     {
    //         for(int k=i;k<j;k++)
    //         {
    //             cout<<arr[k]<<" ";
    //         }
    //     }
    // }

    //subarray sum

    // int n;
    
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++)
    // {
    //     int sum=0;
    //     for(int j=i;j<n;j++)
    //     {
    //         sum=sum+arr[j];
    //         cout<<sum<<" ";
    //     }
    // }

    //longest arithmatic sub array length 

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pd=arr[1]-arr[0];
    int curr=2;
    int ans=2;
    int i=2;
    for(i=2;i<n;i++)
    {
        
        if(pd==arr[i]-arr[i-1])
        {
            curr++;
        }
        else
        {
            pd=arr[i]-arr[i-1];
            curr=2;
        }
        ans=max(ans,curr);
        i++;
    }
    
    cout<<ans;
    return 0;
}