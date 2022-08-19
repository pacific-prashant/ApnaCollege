#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n=8;
    int flag;
    int arr[8]={1 ,2,0, 7, 2, 0, 2, 0};
    int mx=-1;
    int day=0;
    int count=0;


    if(arr[0]>mx && arr[0]>arr[1])  count++;
    
     for(int i=1;i<n;i++)
    {
        flag=0;
        for(int j=0;j<i;j++)
        {
            
            if(arr[j]<arr[i] && arr[i]>arr[i+1])
            {
                flag++;
            }
        }
         if(flag==i)
            {
                day++;
                
            }
           
    }
    cout<<day+count<<" ";
    return 0;
}