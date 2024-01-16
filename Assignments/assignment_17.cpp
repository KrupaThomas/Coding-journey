/*Given an array of points , where points[i] = [xi, yi] represents a point on the X-Y plane and an integer k , 
return the k closest points to the origin (0, 0) You may return the answer in any order.*/

#include<iostream>
#include<map>
#include<vector>
#include<iterator>

using namespace std;

vector<vector<int>> kthclosest(vector<vector<int>> &arr, int k)
{
    multimap<int,vector<int>> distance_map;

    for(auto point : arr)
    {
        int distance = (point[0]*point[0]) + (point[1]+point[1]);
        distance_map.insert({distance, point});
    }
    vector<vector<int>> result ;
    for(auto it = distance_map.begin(); k>0 && it!=distance_map.end();it++,k--)
    {
        result.push_back(it->second);
    }
    return result;
}

int main()
{
    vector<vector<int>> array = {{3,0},{2,2},{-2,2},{4,1}};
    int k;

    cout<<"Enter the value of k : "<<endl;
    cin>>k;

    vector<vector<int>> ans = kthclosest(array,k);

    for(auto point : ans)
    {
        cout<<point[0]<<" , "<<point[1]<<endl;
    }

    return 0;
}