#include<iostream>
#include<list>

using namespace std;

int main()
{
    std::list<int>lst = {0, 5, 8 , 9};
    std::list<int>cst = {1,2,3,4};

    cout<<"Begin : "<<*cst.begin()<<endl;
    cout<<"End : "<<*cst.end()<<endl;
    cout<<"Front : "<<cst.front()<<endl;
    cout<<"Back : "<<cst.back()<<endl;

    for(list<int>::iterator i = cst.begin(); i != cst.end(); i++)
    {
        cout<<*i<<" ";
    }

    cst.reverse();
    cout<<"Reversed list : ";
    for(list<int>::iterator i = cst.begin(); i != cst.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;

    cst.swap(lst);
    cout<<"Swapped list : ";

    for(list<int>::iterator i = cst.begin(); i != cst.end(); i++)
    {
        cout<<*i<<" ";
    }
    
    cout<<endl;

    cout<<"after adding elements to the first list: ";
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);

    for(list<int>::iterator i = lst.begin(); i != lst.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;

    lst.pop_back();
    lst.pop_back();
    lst.pop_back();

    for(list<int>::iterator i = lst.begin(); i != lst.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;

    cout<<"size : "<<lst.size()<<endl;
    
    lst.push_front(80);
    lst.push_front(90);

    lst.pop_front();
    lst.pop_front();

    for(list<int>::iterator i = lst.begin(); i != lst.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;

    lst.sort();
    cout<<"The sorted list : ";
    for(auto i : lst)
    {
        cout<<i<<" ";
    }

    cout<<endl;


    lst.merge(cst);
    cout<<"The merged list : ";
    for(list<int>::iterator i = lst.begin(); i != lst.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;

    return 0;
}