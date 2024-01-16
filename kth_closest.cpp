//to find the first k closest points to the origin

//Algorithm
//1. declare vector or array of points
//2. find the distance of each othese points from the origin.
//3. add them to multimap where distance is key and value is points -> we use multimap as it can have multiple 
//values for keys. multimap will also automatically sort and give you
//4. so just addd the first k points from that multimap to a vector and display those points.

#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<vector<int>> kth_smallest(vector<vector<int>> &arr, int k)
{
    multimap<int,vector<int>> distance_map;
    for(auto point : arr)
    {
        int distance = (point[0]*point[0]) + (point[1]*point[1]);
        distance_map.insert({distance,point});
    }
    vector<vector<int>> result;
    for(auto it = distance_map.begin(); k>0 && it != distance_map.end(); it++, k--)
    {
        result.push_back(it->second);
    }
    return result;
}

int main()
{
    vector<vector<int>> array = {{2,-2}, {0,3}, {2,2}, {4,1}};
    int k;
    cout<<"Enter k : "<<endl;
    cin>>k;
    vector<vector<int>> ans = kth_smallest(array , k);

    for(auto point : ans)
    {
        cout<<"{"<<point[0]<<","<<point[1]<<"}"<<endl;
    }
    return 0;
}

