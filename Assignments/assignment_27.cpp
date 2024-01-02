//Design a stack that supports push, pop, top, and retrieving the
//minimum element in constant time. Implement the MinStack class: 
//MinStack() initializes the stack object. void push(int val) pushes 
//the element val onto the stack. void pop() removes the element on 
//the top of the stack. int top() gets the top element of the stack. 
//int getMin() retrieves the minimum element in the stack. You must 
//implement a solution with O(1) time complexity for each function.

#include<iostream>

using namespace std;

class MinStack
{
    public: 
    
    int arr[100];
    int top;

    MinStack()
    {
        top = -1;
    }

    void push(int x)
    {
        if(top >= -1)
        {
            arr[++top] = x;
        }
        
    }

    int pop()
    {
        if(top <= -1)
        {
            
            return -1;
        }
        return arr[top--];
        
    }

    int Top()
    {
        return arr[top];
    }

    int getMin()
    {
        int min = arr[top];
        while(top!=0)
        {
            if(arr[--top]<=min)
            {
                min = arr[top];
                
            }
            
        }
        return min;
        
    }

};

int main()
{
    MinStack newStack;
    newStack.push(3);
    newStack.push(7);
    newStack.push(9);
    newStack.push(37);
    newStack.push(1);

    cout<<"popped element : "<< newStack.pop()<<endl;
    // cout<<"popped element : "<< newStack.pop()<<endl;
    // cout<<"popped element : "<< newStack.pop()<<endl;
    // cout<<"popped element : "<< newStack.pop()<<endl;
    // cout<<"popped element : "<< newStack.pop()<<endl;

    cout<<"Element on top : "<<newStack.Top()<<endl;

    cout<<"Minimum element is : "<<newStack.getMin()<<endl;
    
    
    return 0;
}