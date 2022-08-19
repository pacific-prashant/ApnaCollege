#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtTail(node*&head,int val)
{
  
    node *n=new node(val);
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

void evenafterodd(node*&head)
{
    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    while(odd->next!=NULL && even->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next!=NULL)
    {
        even->next=NULL;
    }
}

void display(node*head)
{
    node *p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main()
{
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
    cout<<endl;
    evenafterodd(head);
    display(head);
    return 0;
}