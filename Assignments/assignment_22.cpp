//You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation. 
//Evaluate the expression. Return an integer that represents the value of the expression

#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int reverse_polish(vector<string>&arr)
{
    stack<int>s;
    for(string x : arr)
    {
        if(x == "+")
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(a+b);
        }

        else if(x == "*")
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(a*b);
        }
        else if(x == "/")
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(a/b);
        }
        else if(x == "-")
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(b-a);
        }
        else
        s.push(stoi(x));

    }
    return s.top();
}

int main()
{
    vector<string> array = {"12","4","5","1","+","*","0","5","+"};

    cout<<"The result is : "<<reverse_polish(array)<<endl;
    return 0;
}