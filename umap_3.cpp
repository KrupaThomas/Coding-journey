#include<iostream>
#include<unordered_map>
#include<sstream>

using namespace std;

int main()
{
    string s = "Geeks for geeks is a geeks organisation";
    unordered_map<string,int> umap;

    string word;

    stringstream str(s);

    while(str>>word)
    {
        umap[word]++;
    }

    for(auto i : umap)
    {
        cout<<i.first<<" ";
        cout<<i.second<<endl;
    }


    return 0;
}


