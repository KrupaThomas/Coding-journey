#include<iostream>
#include<unordered_set>

//here set is unordered and has unique objects
//cannot have multiple /duplicate objects

using namespace std;

int main()
{
    std::unordered_set<int>uset1;
    std::unordered_set<int>uset2 = {10,56,23,45,89};

    for(unordered_set<int>::iterator i = uset2.begin(); i!= uset2.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    //after inserting
    uset2.insert(20);
    uset2.insert(30);
    uset2.insert(40);

    for(unordered_set<int>::iterator i = uset2.begin(); i!= uset2.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    //after erasing
    uset2.erase(20);

    for(unordered_set<int>::iterator i = uset2.begin(); i!= uset2.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    uset2.erase(uset2.begin(),uset2.find(45));

    for(unordered_set<int>::iterator i = uset2.begin(); i!= uset2.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    uset1.swap(uset2);
    cout<<"After swapping uset2 elements are: ";
    for(unordered_set<int>::iterator i = uset2.begin(); i!= uset2.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    cout<<"Size of elements are : "<<uset1.size()<<endl;
    cout<<"Count of elements 23 in uset 1 is : "<<uset1.count(23)<<endl;

    return 0;

}