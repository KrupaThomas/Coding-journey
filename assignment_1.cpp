#include<iostream>

// Given the head of a singly linked list, return the middle node of the linked list.
// If there are two middle nodes, return the second middle node


#include<forward_list>
#include<iterator>

using namespace std;
void move(int, forward_list<int> lst);

int main()
{
    
    forward_list<int> lst;
    lst.assign({1,2,4,6,9,10});
    int count = 0;
    for ( auto i : lst)
    {
        count++;
    }
    

    if(count%2==0)
    {
        //cout<<"hi";
        move(count,lst);
        
    }
    else
    {
        //cout<<"hi";
        move(count,lst);
    }

    return 0;
}

void move(int n, forward_list<int> lst )
{
    int step = n/2;
    forward_list<int>::iterator i = lst.begin();
    advance(i,step);
    cout<<"The middle node is : "<<*i<<endl;
}