#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    stack<int> at;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
        cout<<" ";
    }cout<<endl;
    return 0;
}