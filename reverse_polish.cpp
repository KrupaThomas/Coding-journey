#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int rev_pol(vector<string>&arr)
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

        else  if(x == "*")
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(a*b);
        }

        else  if(x == "/")
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(a/b);
        }
        else  if(x == "-")
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            s.push(b - a);
        }
        else{
            s.push(stoi(x));
        }
    }
    return s.top();

}

int main()
{
    vector<string>array = {"4","2","/","3","+","5","/"};

    cout<<"The value after operation is : "<<rev_pol(array)<<endl;


    return 0;
}