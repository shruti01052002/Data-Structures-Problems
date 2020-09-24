/** Insertion of linked list**/
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

void InsertionAtBeginning(int data)
{
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void InsertAfter(int NodeAfter, int data)
{
    struct Node *temp;
    temp = head;
    if(temp==NULL)
    cout<<"The node can't be inserted in this case as the list doesn't exist."<<endl;
    else
    {
        while(temp->data!=NodeAfter)
        {
         temp = temp->next;
        }
    if(temp==NULL)
    {
     cout<<"The node can't be  inserted."<<endl;
     return;
    }
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = temp->next;
    temp->next = new_node;
    }
}

void InsertAtEnd(int data)
{
    Node *temp;
    temp = head;
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void PrintLinkedList()
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
    InsertionAtBeginning(1);
    cout<<"After Inserting 1 at Beginning: "<<endl;
    PrintLinkedList();
    InsertionAtBeginning(7);
    cout<<"After Inserting 7 at Beginning: "<<endl;
    PrintLinkedList();
    InsertAtEnd(14);
    cout<<"After Inserting 14 at End: "<<endl;
    PrintLinkedList();
    InsertAfter(1, 20);
    cout<<"Insertion of 20 After node 1: "<<endl;
    PrintLinkedList();
    return 0;
}

/**
Output:
After Inserting 1 at Beginning:
1
After Inserting 7 at Beginning:
7 1
After Inserting 14 at End:
7 1 14
Insertion of 20 After node 1:
7 1 20 14

Process returned 0 (0x0)   execution time : 0.076 s
Press any key to continue
**/
