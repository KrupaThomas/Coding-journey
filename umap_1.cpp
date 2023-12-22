#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    std::unordered_map<string,int> umap1;
    umap1["Geeks"] = 10;
    umap1["for"] = 20;
    umap1["Geeks"] = 30;

    for(pair<string,int> i : umap1)
    {
        cout<<i.first<<" ";
        cout<<i.second<<endl;
    }


    return 0;
}