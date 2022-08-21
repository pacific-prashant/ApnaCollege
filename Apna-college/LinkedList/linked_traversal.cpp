#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
void linklisttraversal(struct node *ptr)
{
    while(ptr != NULL)
    {
        cout<<"element :"<<ptr->data<<endl;
        ptr = ptr->next;

    }
}


int main()
{
    struct node *head;    //it stores the adress of variable type node
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    head=(struct node *)malloc(sizeof(struct node));      //malloc() is a standard library function in C that allocates memory of size equal to the size of newnode structure in the heap region during runtime and returns a void pointer to that location.
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    fifth=(struct node *)malloc(sizeof(struct node));
    head ->data=7;
    head ->next=second;
    second ->data=11;
    second ->next=third;
    third ->data=1;
    third ->next=fourth;
    fourth ->data=12;
    fourth ->next=fifth;
    fifth ->data=56;
    fifth ->next=NULL;
    linklisttraversal(head);

    return 0;
}