//initialisation methods umap

#include<iostream>
#include<string>
#include<unordered_map>
//#include<utility>

using namespace std;

int main()
{
    int n = 0;
    pair<string,string> old_map[] = {
        make_pair("Hello","English"),
        make_pair("Hi", "English"),
        make_pair("Anyong","Korean")
    };
    n = sizeof(old_map)/sizeof(old_map[0]);
    unordered_map<string,string> umap1(old_map , old_map + n);//using pair of arrays

    cout<<"Umap1"<<endl;

    for (auto i : umap1)
    {
        cout<<i.first<<" ";
        cout<<i.second<<endl;
    }


    unordered_map<string,string> umap2(umap1);//uisng copy constructor
    for(auto i : umap2)
    {
        cout<<i.first<<" ";
        cout<<i.second<<endl;

    }

    unordered_map<string,string> umap3;
    umap3.insert(umap1.begin(),umap1.end());//uisng map.insert(map2)
    for(auto i : umap3)
    {
        cout<<i.first<<" ";
        cout<<i.second<<endl;
        
    }

    return 0;
}