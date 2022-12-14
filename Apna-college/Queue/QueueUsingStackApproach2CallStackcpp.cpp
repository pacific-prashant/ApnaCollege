#include<iostream>
#include<stack>
using namespace std;

class queue
{
    public:
    stack<int>s1;

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if(s1.empty())
        {
            cout<<"Queue is empty";
            return -1;
        }

        int x=s1.top();
        s1.pop();

        if(s1.empty())
        {
            return x;
        }

        int item=pop();
        s1.push(x);
        return item;

    }

    bool empty()
    {
        if(s1.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.pop();
    cout<<endl;
    q.push(6);
    cout<<q.pop();

    return 0;
}