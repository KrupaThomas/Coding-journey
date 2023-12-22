#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
    forward_list<int> lst1;
    forward_list<int> lst2;
    forward_list<int> lst3;
    lst1 = {1,2,3,4};
    lst2.assign(6,10);
    lst3.assign(lst1.begin(),lst1.end());

    /*for(int no : lst1)
        cout<<no<<" ";
    cout<<endl;
    
    for(int &no : lst2)
        cout<<no<<" ";
    cout<<endl;

    for(int no : lst3)
        cout<<no<<" ";
    cout<<endl;

    //to insert element at the front of the list

    lst1.push_front(90);
    for(int &no : lst1)
        cout<<no<<" ";
    cout<<endl;

    lst1.emplace_front(69);
    for(int &no : lst1)
        cout<<no<<" ";
    cout<<endl;


    lst1.pop_front();
    for(int &no : lst1)
        cout<<no<<" ";
    cout<<endl;*/

    //insert at particular position
    forward_list<int>::iterator ptr;
    ptr = lst1.insert_after(lst1.begin(),9);

    for(int &no : lst1)
        cout<<no<<" ";
    cout<<endl;

    
    forward_list<int>::iterator gtr;
    gtr = lst1.emplace_after(ptr,9);

    for(int &no : lst1)
        cout<<no<<" ";
    cout<<endl;

    gtr = lst1.erase_after(gtr);
    for(int &no : lst1)
        cout<<no<<" ";
    cout<<endl;

    gtr = lst1.erase_after(gtr,lst1.end());
     for(int &no : lst1)
        cout<<no<<" ";
    cout<<endl;

}