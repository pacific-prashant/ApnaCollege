#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"a"<<i<<j<<" ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
            cout<<endl;
    }
    int target;
    cout<<"enter target : ";
    cin>>target;
    int r=0;
    int c=m-1;
    bool found=false;
     while(r<n && c>=0)
    {
        if(arr[r][c]==target)
        {
            found=true;
            break;
        }
        else if(arr[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if(found)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found";
    }
    return 0;
}