#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<int,int> umap = {{1,2},{4,5},{8,9}};
    //to learn find how it returns an iterator to element if found
    //else it return iterator to the end
    auto i = umap.find(90);
   
    if(i!=umap.end())
    {
        cout<<"Element present"<<endl;
    }
    else
    {
        cout<<"Element not present"<<endl;
    }

    return 0;
}