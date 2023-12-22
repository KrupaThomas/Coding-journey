#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<string,int> my_map = {{"hi",4},{"hello",8},{"anyong",3}};
    //to learn buckets in unordered_map
    // for(int i = 0; i < my_map.bucket_count();i++)
    // {
    //     cout<<"Bucket "<<i<<" : ";
    //     for( auto j = my_map.begin(i); j != my_map.end(i);j++)
    //     {
    //         cout<<j->first<<" ";
    //         cout<<j->second<<" \t";
    //     }
    //     cout<<endl;
        
    // }

    for(auto i = my_map.begin(); i!=my_map.end(); i++)
    {
        cout<<"The bucket number of "<<i->first<<" whose value is "<<i->second<<" is at "<<my_map.bucket(i->first)<<endl;
    }

    return 0;
}
