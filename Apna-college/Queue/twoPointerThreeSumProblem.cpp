#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int n;
    int t;
    cin>>n>>t;
    vector<int>arr(n);
    for(auto &i:arr)
    {
        cin>>i;
    }

    bool found=false;
    for(int i=0;i<n;i++)
    {
        int low=i+1,h=n-1;
        while(low<h)
        {
            int curr=arr[i]+arr[low]+arr[h];
            if(curr==t)
            {
                found=true;
                cout<<arr[i]<<arr[low]<<arr[h];
                cout<<endl;
                break;
            }

            else if(curr<t)
            {
                low++;
            }

            else
            {
                h--;
            }
        }
    }

    if(found==true)
    {
        cout<<"koi mil gya"<<endl;
    }
    else
    {
        cout<<"nhi mila";
    }
    return 0;
}