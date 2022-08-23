#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

class queue
{
    node* front;
    node* back;
    public:
    queue()
    {
        front=NULL;
        back=NULL;
    }
    void push(int x)
    {
        node* n=new node(x);
        if(front==NULL)
        {
            back=n;
            front=n;
            return;
        }
        back->next=n;  //back ke next ko n se link kr diya 
        back=n; // back pointer ko n pe le gye
    }

    void pop()
    {
        if(front==NULL)
        {
            cout<<"Queue is empty";
            return;
        }

        node* todelete=front;
        front=front->next;
        delete todelete;

    }

    int peek()
    {
        if(front==NULL)
        {
            cout<<"NO element in Queue";
            return -1;
        }
        return front->data;

    }

    bool empty()
    {
        if(front==NULL)
        {
            cout<<"NO element in Queue";
            return true;
        }
        else
        {
            return false;
        }
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
    cout<<q.peek();
    cout<<endl;
    q.pop();
    cout<<q.peek();
    cout<<endl;
    cout<<q.empty();
    return 0;
}