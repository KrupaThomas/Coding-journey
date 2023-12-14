#include<iostream>
#define size 50
using namespace std;


class stack
{
    public:
    int stackarray[size];
    int pos = 0;

    public:
    void push(int x);
    int pop();

};

void stack::push(int x)
{
    if(pos<size)
    {
        stackarray[pos++] = x;
    }
    else{
        cout<<"Stack overflow"<<endl;
    }
}

int stack::pop()
{
    if(pos<0)
    {
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    else
    {
        
        return stackarray[pos--];
    }
        
    
}

int main()
{
    stack s;
    int i = 0;
    for(i = 0; i<size ; i++)
    {
        s.push(i);
    }

    for(i = 0; i< size; i++)
    {
        cout<<s.stackarray[i]<<endl;
    }

    cout<<"popped element is : "<<s.pop()<<endl;

    for(i = 0; i< size; i++)
    {
        cout<<s.stackarray[i]<<endl;
    }

    return 0;
}