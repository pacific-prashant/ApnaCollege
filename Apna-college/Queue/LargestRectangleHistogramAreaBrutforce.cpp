#include<iostream>
#include<climits>
using namespace std;

int largestArea(int arr[],int n)
{
    int maxArea=0;
    for(int i=0;i<n;i++)
    {
        int minheight=INT_MAX;
        for(int j=i;j<n;j++)
        {
            minheight=min(minheight,arr[j]);
            maxArea=max(maxArea,minheight*(j-i+1));
        }
    }
    return maxArea;
}

int main()
{
    int arr[]={2,1,5,6,2,3,1};
    int n=7;
    cout<<largestArea(arr,n);
    return 0;
}