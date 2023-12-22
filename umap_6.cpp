#include<iostream>
#include<unordered_map>

using namespace std;

//insert in unordered map

int main()
{
    unordered_map<int,int> umap1 = {{1,2},{7,9},{5,6}};
    umap1.insert({66,8});
    auto i = umap1.find(1);
    umap1.insert(i,{88,1000});
    for(auto j : umap1)
    {
        cout<<j.first<<" ";
        cout<<j.second<<endl;
    }


    unordered_map<int,int> umap2;
    umap2.insert(umap1.begin(), umap1.end());
    for(auto j : umap2)
    {
        cout<<j.first<<" ";
        cout<<j.second<<endl;
    }

    return 0;
}