/** Deletion of Linked List**/
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

void Push(int data)
{
    Node *temp;
    temp = head;
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    if(head == NULL)
    head = new_node;
    else
    {
        while(temp->next!=NULL)
        temp = temp->next;

        temp->next = new_node;
    }
}

void DeleteNode(int data)
{
    Node *temp, *prev;
    temp = head;
    prev = NULL;
    if(temp==NULL)
    {
     cout<<"The List is Empty. The node can't be deleted."<<endl;
     return;
    }
    if(temp->data=data)
    {
        head = temp->next;
        return;
    }
    while(temp!=NULL&&temp->data!=data)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp==NULL)
    {
        cout<<"The key is not present in the list."<<endl;
        return;
    }
    prev->next=temp->next;
}

void PrintList()
{
    struct Node *ptr;
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}
int main()
{
    Push(2);
    Push(3);
    Push(4);
    Push(5);
    Push(6);
    Push(7);
    cout<<"Original List is: ";
    PrintList();
    DeleteNode(2);
    cout<<"After Deletion: ";
    PrintList();
    return 0;
}


/**
Output:
Original List is: 2 3 4 5 6 7
After Deletion: 3 4 5 6 7

Process returned 0 (0x0)   execution time : 0.143 s
Press any key to continue.
**/
