#include<iostream>
#include<map>

using namespace std;
//associative container - key value pairs, search easy
//can insert/delete but cannot alter value like with at or with [] or anyhow.
//duplicate key value pairs allowed unlike in maps

int main()
{
    std::multimap<int,string>map1;
    std::multimap<int,string>map2 = {{101, "Krupa"},{201, "Karun"},{301, "Ashu"},{301,"Arun"}};


    for(multimap<int,string>::iterator i = map2.begin(); i!= map2.end(); i++)
    {
        cout<<i->first<<" ";
        cout<<i->second<<endl;

    }

    //insert at particular position

    map2.insert(pair<int,string>(223,"Asha"));
    map2.insert(make_pair(201,"Akash"));

    for(multimap<int,string>::iterator i = map2.begin(); i!= map2.end(); i++)
    {
        cout<<i->first<<" ";
        cout<<i->second<<endl;

    }

    //erase at position
    multimap<int,string>::iterator i = map2.begin();
    map2.erase(i);

    map2.erase(301);

    for(multimap<int,string>::iterator i = map2.begin(); i!= map2.end(); i++)
    {
        cout<<i->first<<" ";
        cout<<i->second<<endl;

    }

    cout<<"Size is: "<<map2.size()<<endl;
    map1.swap(map2);

    cout<<"No of times 301 appears is : "<<map1.count(301)<<endl;


    return 0;
}