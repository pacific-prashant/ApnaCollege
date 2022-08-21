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
    node* even=new node(-1);
    node* evenhead=even;
    node* odd=new node(-1);
    node* oddhead=odd;
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        {
            even->next=temp;
            even=even->next;
        }
        else
        {
            odd->next=temp;
            odd=odd->next;
        }
        temp=temp->next;
    }
    
    if(odd->next!=NULL)
    {
        odd->next=NULL;
    }
    even->next=NULL;
    odd->next=evenhead->next;
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
    int arr[]={1,2,9,44,22,7};
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