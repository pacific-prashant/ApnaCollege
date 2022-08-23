#include<iostream>
#include<queue>
using namespace std;

class stack
{
    int N;
    queue<int>q1;
    queue<int>q2;

    public:

    stack()
    {
        N=0;
    }

    void push(int x)
    {
        q1.push(x);
        N++;
    }

    void pop()
    {
        if(q1.empty())
        {
            cout<<"No element to delete";
            return;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop();
        N--;
        queue<int>temp=q1;
        q1=q2;
        q2=temp;
    }

    int top()
    {
        if(q1.empty())
        {
            return -1;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int top=q1.front();
        q2.push(top);// is baar hum element delete nhi kr rhe h sirf usko print krwa rhe h isisliye us element ko wpas q2 m daal dege
        
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        return top;
    }

    int sizeStack()
    {
        return N;
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.sizeStack()<<endl;


    return 0;
}