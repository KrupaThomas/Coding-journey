#include<iostream>
#include<vector>

using namespace std;

int main()
{
    std::vector<int>vec;
    //int i = 0, j = 0;
    cout<<vec.size()<<endl;

    std::vector<int>test = {1,2,3};
    cout<<test.size()<<endl;

    vec.push_back(30);
    vec.push_back(5);
    vec.push_back(8);
    
    for(vector<int>::iterator i = vec.begin(); i != vec.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;


    test.push_back(100);
    test.push_back(45);
    test.push_back(90);

    for(vector<int>::iterator j = test.begin(); j!= test.end(); j++)
    {
        cout<<*j<<" ";
    }
    cout<<endl;

    test.pop_back();
    for(vector<int>::iterator j = test.begin(); j!= test.end(); j++)
    {
        cout<<*j<<" ";
    }

    cout<<endl;
    test.pop_back();
    for(vector<int>::iterator j = test.begin(); j!= test.end(); j++)
    {
        cout<<*j<<" ";
    }

    cout<<endl;

    //insert is used to insert avalue before the position pointed to by iterator
    //iterator is used to point to the container

    vector<int>::iterator i = test.begin();
    test.insert(i,9);

    for(vector<int>::iterator j = test.begin(); j!= test.end(); j++)
    {
        cout<<*j<<" ";
    }

    cout<<endl;

    vector<int>::iterator j = test.end();
    test.erase(--j);//if you use j it gives segmentation fault as the iterator points
//to invalid memory as test.end of points to space after the end of the vector
    cout<<test.size()<<endl;

    test.erase(test.begin(),test.end()-1);
    for(vector<int>::iterator j = test.begin(); j!= test.end(); j++)
    {
        cout<<*j<<" ";
    }

    cout<<endl;

    test.swap(vec);
    cout<<"test elements: "<<endl;
    for(vector<int>::iterator j = test.begin(); j!= test.end(); j++)
    {
        cout<<*j<<" ";
    }

    cout<<endl;

    for(vector<int>::iterator i = vec.begin(); i != vec.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    cout<<vec.capacity()<<endl;
    cout<<test.capacity()<<endl;

    return 0;
}
