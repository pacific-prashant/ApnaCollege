#include <iostream>
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
    // for(int i=0;i<n/2;i++)
    // {
    //     cout<<arr[i]/n<<" "<<arr[i]%n<<endl;
    // }

    int n=6;
    int arr[n]={1,2,3,4,5,6};
    for(int i=0;i<=n/2;i++)
    {
        cout<<arr[i]/n<<" "<<arr[i]%n;
    }
    return 0;
}