//merge overlapping intervals to form non overlapping interval

#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> merge_intervals(vector<vector<int>> &arr)
{
    int n = arr.size();
    if(n<=1)
    {
        return arr;
    }

    vector<vector<int>> ans;
    int start = arr[0][0];
    int end = arr[0][1];

    for(int i = 1;i<n;i++)
    {
        if(arr[i][0]<=end)
        {
            end = max(end,arr[i][1]);
        }
        else{
            ans.push_back({start,end});
            start = arr[i][0];
            end = arr[i][1];
        }

    }
    ans.push_back({start, end});
    return ans;

}

int main()
{
    vector<vector<int>> arr = {{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};

    vector<vector<int>> ans = merge_intervals(arr);

    for(auto level : ans)
    {
        for(auto element : level)
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }

    return 0;
}