#include<iostream>
#include<queue>

using namespace std;

int main()
{
    //max heap

    /*std::priority_queue<int>queue1;

    queue1.push(1);
    queue1.push(30);
    queue1.push(3);

    //elements are arranged as 30,3,1

    cout<<"Top element is : "<<queue1.top()<<endl;
    queue1.pop();//deleted the top element in the queue
    cout<<"Top element is : "<<queue1.top()<<endl;
    queue1.pop();//deleted the top element in the queue
    cout<<"Top element is : "<<queue1.top()<<endl;*/


    std::priority_queue<int, vector<int>, greater<int>>queue2;//min heap

    queue2.push(20);
    queue2.push(40);
    queue2.push(34);
    //20 34 40

    cout<<"Top element : "<<queue2.top()<<endl;
    queue2.pop();
    cout<<"Top element : "<<queue2.top()<<endl;
    queue2.pop();
    cout<<"Top element : "<<queue2.top()<<endl;
    queue2.pop();

    cout<<"Size : "<<queue2.size()<<endl;



    return 0;

}