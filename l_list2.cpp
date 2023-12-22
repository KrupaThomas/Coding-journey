//circular linked list
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;

};

struct node *head = NULL, *temp = NULL, *newnode = NULL;

void create_node();
void display();

int main()
{
    create_node();
    display();

    return 0;
}

void create_node()
{
    int choice;
    do
    {
        newnode = (struct node*)(malloc(sizeof(struct node)));
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
            temp = newnode;
        }
        temp->next = head;
        cout<<"Enter choice (0/1) to continue : ";
        cin>>choice;
    }while(choice);
    

}

void display()
{
    temp = head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<temp->data;

}