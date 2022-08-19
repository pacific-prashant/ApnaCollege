#include <iostream>
using namespace std;
int main()
{
    //This method is only valid for series of number
    int arr[6]={3,4,5,6,7,8};
    int n=6;
    for(int i=0;i<n/2;i++)
    {
        arr[i]=n*arr[n-i-1]+arr[i];        //divident=divisor x quotient + remainder  
    }
    for(int i=0;i<n/2;i++)
    {
        cout<<arr[i]/n<<" ";                 //divide krne se quotient milega i.e a[n-i-1] jo ki last wali terms hongi respectively
    }
    for(int i=n/2-1;i>=0;i--)
    {
        cout<<arr[i]%n<<" ";
    }
    return 0;
}