// Given head , the head of a linked list, determine if the linked list has
// a cycle in it.
// There is a cycle in a linked list if there is some node in the list that can be
// reached again by continuously following the next pointer . Internally, pos
// is used to denote the index of the node that tail's next pointer is connected
// to. Note that pos is not passed as a parameter.
// Return true if there is a cycle in the linked list. Otherwise, return false 

#include<iostream>

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

    //display();

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
        //temp->next = head;//uncomment to make it circular
        cout<<"Do you wish to continue (0/1) : ";
        cin>>choice;

    }while(choice);
}

void display()
{
    temp = head;
    while(temp!=0)
    //while(temp->next != head) //uncomment to make circular linked list
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    //cout<<temp->data;//uncomment to see last element of circular linked list
}

bool is_circular()
{
    if(head == nullptr || head->next == nullptr)
    {
        return true;
    }
    struct node* slow = head;
    struct node* fast = head->next;

    while(fast!=nullptr && fast->next != nullptr)
    {
        if(slow == fast)
        {
        return true;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    

    return false;
}