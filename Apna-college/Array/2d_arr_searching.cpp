#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    
    int x;
    cout<<"enter the element you want to find: ";
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==x)
            {
             cout<<i<<" "<<j<<endl;
             flag=true;
            }
        }
    }
    if(flag==true)
    {
        cout<<"element is found";
    }
    else
    {
        cout<<"element is not found";
    }
    return 0;
}