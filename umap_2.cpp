#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> umap1 = {{"hi", 1}, {"hello", 7}, {"hey", 6},{"kimchi", 4}};

    umap1.insert({"Kemcho",5});
    umap1.insert(make_pair("aniyong", 8));
    umap1.insert(pair<string,int>("kimchi",3));

    for(auto i : umap1)
    {
        cout<<i.first<<" ";
        cout<<i.second<<endl;
    }

    auto it = umap1.find("Kemcho");
    if(it!=umap1.end())
    {
        cout<<"Key found at position : "<<std::distance(umap1.begin(), it)<<endl;

    }
    else
        cout<<"Key not found"<<endl;


    cout<<"Count of each word in map :"<<endl;
    for (auto it : umap1)
    {
        cout<<"Count of "<<it.first<<" is : "<<umap1.count(it.first)<<endl;
    }
    return 0;
}