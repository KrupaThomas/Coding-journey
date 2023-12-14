#include<iostream>
#include<queue>
using namespace std;

int main()
{
    std::queue<int>queue1;

    cout<<"Size : "<<queue1.size()<<endl;

    queue1.push(20);
    queue1.push(3);
    queue1.push(40);
    //20 3 40

    cout<<"Front: "<<queue1.front()<<endl;
    //cout<<"Top: "<<queue1.top()<<endl; //no top in queue only in stack and priority queue

    while(!queue1.empty())
    {
        cout<<"front elements in queue: "<<queue1.front()<<endl;
        queue1.pop();//only access elements by dequeing them here pop
        //deletes the element at the front
    }

    cout<<"size : "<<queue1.size();
}