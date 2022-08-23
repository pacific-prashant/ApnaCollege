#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        int day=0;
        
        for(int j=i;j>=0;j--)
        {
             if(arr[i]>=arr[j])
             {
                day++;
             }
             else
             {
                break;
             }
        }
        cout<<day<<" ";
        
    }
    
    return 0;
}