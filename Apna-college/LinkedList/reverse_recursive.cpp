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
void insertAtTail(node*&head,int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* p = head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=n;
}

node* reverseRecursive(node*&head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

void display(node*head)
{
    node *p = head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main()
{   node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    node* newhead=reverseRecursive(head);
    display(newhead);
    return 0;
}