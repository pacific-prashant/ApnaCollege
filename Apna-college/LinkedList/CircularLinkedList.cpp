#include <iostream>
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

void insertAtHead(node*&head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* temp;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}



void insertAtTail(node*&head,int val)
{
    if(head->next==NULL)
    {
        insertAtHead(head,val);

    }
    node* n = new node(val);
    node* temp;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void deleteAtHead(node*&head)
{
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    node* todelete =head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
}

void deletion(node* &head,int pos)
{
    if(pos==1)
    {
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    int i=0;
    while(i!=pos-1)
    {
        temp=temp->next;
        i++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

void display(node*head)
{
    node* temp=head;
    do
    {
        cout<<temp->data;
        temp=temp->next;
    } while (temp!=head);
    
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    return 0;
}