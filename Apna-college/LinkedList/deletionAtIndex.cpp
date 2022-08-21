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

    void insert_tail(node *&head,int val)
    {
        node *n = new node(val);  //creating a new node 
        if(head==NULL)
        {
            head = n;
            return;
        }
        node *p = head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=n;
    } 

    void deleteATHead(node *&head)
    {
        node* todelete = head;
        head=head->next;
        delete todelete;
    }

    void deletion(node *&head,int pos)
    {
        if(head==NULL)
        {
            return;
        }

        if(head->next==NULL)
        {
            deleteATHead(head);
            return;
        }
        int i=0;
        node *temp = head;
        
        while(i!=pos-1)
        {
        temp=temp->next;
        i++;
        }
        node* todelete=temp->next;
        temp->next=temp->next->next;
        delete todelete; 
    }

    void display(node *head)
    {
        node *p = head;
        while(p!=NULL)
        {
            cout<< p->data<<" ";
            p=p->next;
        }
    }
int main()
{
    node *head=NULL;
    insert_tail(head,2);
    insert_tail(head,3);
    insert_tail(head,4);
    insert_tail(head,5);
    insert_tail(head,6);
    display(head);
    cout<<endl;
    deletion(head,3);
    // deleteATHead(head);
    display(head);
    return 0;
}