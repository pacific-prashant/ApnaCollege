#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    int index;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
    node(int val,int position)
    {
        data=val;
        next=NULL;
        index=position;
    }
};

// node* insertAtHead(node*&head,int val)
// {
//     node *n = new node(val);  //creating a new node so that we can insert that node at head.
//     n->next = head;
//     head = n;
//     return head;
// }

void insertAtTail(node*&head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }

    node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=n;
}

void insertAtIndex(node*&head,int val,int position)
{
    // if(position==0)
    // {
    //     insertAtHead(head);
    //     return;
    // }
    node*n=new node(val,position);
    node*p=head;
    int i=0;
    while(i!=position-1)
    {
        p=p->next;
        i++;
    }
    n->data=val;
    n->next=p->next;
    p->next=n;
    return;
}

void display(node* head)
{
    node*p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main()
{
    node*head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    //  node* newhead=insertAtHead(head,7);
    //  display(newhead);
    insertAtIndex(head,15,3);
    display(head);
    return 0;
}