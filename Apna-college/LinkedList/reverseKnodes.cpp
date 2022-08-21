#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head,int val)
{
    node *n = new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node *p = head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=n;
}

node* reversek(node* &head,int k)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
    head->next=reversek(nextptr,k);
    }
    return prevptr;
}

void display(node* head)
{
    node *p = head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;

}

int main()
{
    node* head=NULL;
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    display(head);
    int k=3;
    node* newhead=reversek(head,k);
    display(newhead);
    return 0;
}