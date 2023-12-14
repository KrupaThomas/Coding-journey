#include<iostream>
#include<set>

using namespace std;

int main()
{
    std::multiset<int>mset1;
    std::multiset<int>mset2 = {10,10,56,23,45,90};//can have multiple objects
    //and orderered ie arranged in ascending order

    for(multiset<int>::iterator i = mset2.begin(); i!=mset2.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;

    mset1.insert(90);
    mset1.insert(34);
    mset1.insert(45);
    mset1.insert(45);

    mset2.insert(67);
    mset2.insert(56);

    cout<<"After inserting values to set 2: "<<endl;

    for(multiset<int>::iterator i = mset2.begin(); i!=mset2.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;

    cout<<"After erasing value in set 2: "<<endl;
    mset2.erase(mset2.begin(),mset2.find(45));

    cout<<"After erasing values in set 2: "<<endl;

    for(multiset<int>::iterator i = mset2.begin(); i!=mset2.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;

    cout<<"Size of set1 : "<<mset1.size()<<endl;
    cout<<"count of set 1 elements : "<<mset1.count(45)<<endl;

    return 0;
}