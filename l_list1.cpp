#include<iostream>
//implement a single linked list

using namespace std;

struct node
{
    int data;
    struct node *next;
};

void create_node();
void display();
bool is_circular();
struct node *head = 0, *temp, *newnode;


int main()
{
    create_node();

    display();

    cout<<endl<<"The list is circular (0/1): "<<is_circular()<<endl;
    
    return 0;
}

void create_node()
{
    int choice;
    do
    {
        newnode = (struct node *)(malloc (sizeof(struct node)));
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
        cout<<"Do you wish to continue (0/1) : ";
        cin>>choice;

    }while(choice);
}

void display()
{
    temp = head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

bool is_circular()
{
    if(head == nullptr || head->next == nullptr)
    {
        return true;
    }
    struct node* slow = head->next;
    struct node* fast = head->next->next;

    if(slow == fast)
    {
        return true;
    }
    slow = slow->next;
    fast = fast->next->next;

    return false;
}