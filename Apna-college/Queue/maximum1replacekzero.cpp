#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n,k,z,i,ans;
    cin>>n>>k;
    vector<int> arr(n);
    for(auto &i :arr)
    {
        cin>>i;
    }

    i=0;z=0;ans=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==0)
        {
            z++;
        }
        while(z>k)
        {
            if(arr[i]==0)
            {
                z--;
            }
            i++;
        }

        ans=max(ans,j-i+1);
    }
    cout<<ans;
    return 0;
}
