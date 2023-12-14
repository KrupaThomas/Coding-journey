#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    std::unordered_map<int,string>umap1;
    std::unordered_map<int,string>umap2= {{101,"Avani"},{201, "Michele"},{301, "Neha"},{301, "Sruthy"}};

    for(unordered_map<int,string>::iterator i = umap2.begin(); i!= umap2.end(); i++)
    {
        cout<<i->first<<" ";
        cout<<i->second<<endl;
    }

    //insert
    umap2.insert(pair<int,string>(401,"Ashna"));
    umap2.insert(make_pair(201,"Sneha"));//when we tried to insert smtg with same key it neglected this

    for(unordered_map<int,string>::iterator i = umap2.begin(); i!= umap2.end(); i++)
    {
        cout<<i->first<<" ";
        cout<<i->second<<endl;
    }

    //erase
    umap2.erase(101);
    for(unordered_map<int,string>::iterator i = umap2.begin(); i!= umap2.end(); i++)
    {
        cout<<i->first<<" ";
        cout<<i->second<<endl;
    }

    cout<<"Size of umap: "<<umap2.size()<<endl;
    cout<<"Count of elements 201 key  in umap: "<<umap2.count(201)<<endl;

    //to clear all elements
    umap2.clear();
    for(unordered_map<int,string>::iterator i = umap2.begin(); i!= umap2.end(); i++)
    {
        cout<<i->first<<" ";
        cout<<i->second<<endl;
    }




    return 0;
}