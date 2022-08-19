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
        cin>>arr[i][j];
        }
    }
    int rowstart=0;
    int rowend=n-1;
    int columnstart=0;
    int columnend=m-1;
    while(rowstart<=rowend && columnstart<=columnend)
    {
        for(int col=columnstart;col<=columnend;col++)
        {
            cout<<arr[rowstart][col]<<" ";
        }
        rowstart++;

        for(int row=rowstart;row<=rowend;row++)
        {
            cout<<arr[row][columnend]<<" ";
        }
        columnend--;

        for(int col=columnend;col>=columnstart;col--)
        {
            cout<<arr[rowend][col]<<" ";
        }
        rowend--;

        for(int row=rowend;row>=rowstart;row--)
        {
            cout<<arr[row][columnstart]<<" ";
        }
        columnstart++;
    }


    return 0;
}