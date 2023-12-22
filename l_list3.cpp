#include<iostream>
using namespace std;

//implement double linked list
struct node
{
    int data;
    struct node *prev = NULL;
    struct node *next = NULL;

};

node *head = nullptr, *temp = nullptr , *newnode = nullptr;

int main()
{
    int choice;
    head = 0;
    do
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        //newnode = new struct node;
        cout<<"Enter data : ";
        cin>>newnode->data;
        newnode->next = 0;
        if(head == 0)
        {
            head = newnode;
            temp = newnode;

        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        cout<<"Enter choice : ";
        cin>>choice;
    } while (choice);
    
    

    temp = head;
    while(temp!=0)
    {
        
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}