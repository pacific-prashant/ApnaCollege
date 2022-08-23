#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;

    for(auto element:v)
    {
        cout<<element<<" ";
    }

    cout<<endl;

    v.pop_back();//delete last element

    vector<int> v2 (3,50);  // vector m 3 elements honge 50 50 50

    for(auto element:v2)
    {
        cout<<element<<" ";
    }

    cout<<endl;

    swap(v,v2);

    for(auto element:v)
    {
        cout<<element<<" ";
    }//initially v=1 2 3 4

    cout<<endl;

    for(auto element:v2)
    {
        cout<<element<<" ";
    }//initially v2=50 50 50


    return 0;
}