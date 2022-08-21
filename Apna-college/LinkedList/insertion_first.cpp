#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traversing(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"element: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
struct node *  insert_start(struct node *head,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node)); //created a new node so that we can add it as head node 
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

int main()
{
    struct node *head;   //stores the address of variable type node
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    head=(struct node *)malloc(sizeof(struct node)); //allocates the memory size of newnode structure
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    fifth=(struct node *)malloc(sizeof(struct node));
    head->data=7;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=9;
    third->next=fourth;
    fourth->data=10;
    fourth->next=fifth;
    fifth->data=11;
    fifth->next=NULL;
    cout<<"without insertion: ";
    traversing(head);
    cout<<"with insertion: "<<endl;
    head=insert_start(head,57);
    traversing(head);
    return 0;
}