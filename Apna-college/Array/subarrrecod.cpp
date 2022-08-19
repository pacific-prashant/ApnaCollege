#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n=6;
    bool flag;
    int arr[6]={4,8,15,16,23,42};
    int mx=-1;
    int day=0;
    int count=0;
    
    for(int i=0;i<1;i++)
    {
        if(arr[i]>mx && arr[i]>arr[i+1])
        {
            count++;
        }
    }
     for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            flag=0;
            if(arr[j]<arr[i] && arr[i]>arr[i+1])
            {
                
                flag=1;
            
            }
        }
         if(flag==1)
            {
                day++;
                
            }
           
    }
    cout<<day+count<<" ";
    return 0;
}