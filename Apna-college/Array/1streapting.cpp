#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n; //no of element in array 
    cin>>n; //input no of element in array
    int arr[n];  //initialize array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]; //input all the elements values
    }
    const int N=1e6+2; //another array (hatching)
    int idx[N];  //another array initialize
    
    for(int i=0;i<N;i++)
    {
        idx[i]=-1;  //another array elements value -1
    }
    int minidx=INT_MAX; //initializing a maximum value to a variable minidx
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]!=-1)
        {
            minidx=min(minidx,idx[arr[i]]); //
        }
        else
        {
            idx[arr[i]]=i; //array indexing
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
    cout<<minidx;
      //printing array
    }
    return 0;
}
