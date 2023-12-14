#include<iostream>
#include<set>

using namespace std;

//sets are associative containers -> sorted(ascending) , unique objects
int main()
{
    std::set<int>set1;
    std::set<int>set2 = {40,20,10,30,10,40};
    //only unique objects possible so it will erase duplicates and sort in ascending order

    for(set<int>::iterator i = set2.begin(); i!=set2.end();i++)
    {
        cout<<*i<<" ";

    }
    cout<<endl;

    //insert
    set1.insert(1);
    set1.insert(8);
    set1.insert(19);

    set2.insert(90);
    set2.insert(34);
    set2.insert(67);

    cout<<"SET 2"<<endl;
    for(set<int>::iterator i = set2.begin(); i!= set2.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    //erase
    set2.erase(34);//erase by value
    cout<<"SET 2 after erasing"<<endl;
    for(set<int>::iterator i = set2.begin(); i!= set2.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    set2.erase(set2.begin(),set2.find(67));
     cout<<"SET 2 after erasing"<<endl;
    for(set<int>::iterator i = set2.begin(); i!= set2.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    //size
    cout<<"size of set1: "<<set1.size()<<endl;
    //clear
    cout<<"After clearing set 1: ";
    set1.clear();

    for(set<int>::iterator i = set1.begin(); i!= set1.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    return 0;
}