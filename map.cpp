#include<iostream>
#include<string>
#include<map>

using namespace std;
//map associative container - ordered , easy to search fo element
//key value pairs -> easy  to search and we can change the value at that position
//unique keys 

int main()
{
    std::map<int,string>map1;
    std::map<int,string>map2 = {{101,"Ayush"},{201, "Barkha"}, {301, "Nikhat"}};

    for(map<int,string>::iterator i = map2.begin(); i!= map2.end(); i++)
    {
        cout<<i->first<<" ";
        cout<<i->second<<endl;
    }

    cout<<"At 201 position : "<<map2[201]<<endl;
    cout<<"At 201 position : "<<map2.at(201)<<endl;

    map2.at(201) = "Ray";//at does not throw error if out of bound it throws exception so 
    //safer to use at than []

    cout<<"At position 201 : "<<map2.at(201)<<endl;

    //insert at a particular position

    map2.insert(pair<int,string>(223, "Sejal"));
    map2.insert(make_pair(334,"Ahaana"));

    for(map<int,string>::iterator i = map2.begin(); i!= map2.end(); i++)
    {
        cout<<i->first<<" ";
        cout<<i->second<<endl;
    }

    //erase at position
    std::map<int,string>::iterator i = map2.begin();

    map2.erase(i);

    for(map<int,string>::iterator i = map2.begin(); i!= map2.end(); i++)
    {
        cout<<i->first<<" ";
        cout<<i->second<<endl;
    }

    map2.erase(301);

    for(map<int,string>::iterator i = map2.begin(); i!= map2.end(); i++)
    {
        cout<<i->first<<" ";
        cout<<i->second<<endl;
    }






    return 0;
}