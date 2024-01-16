#include<iostream>
#include<vector>

using namespace std;

class Sol
{
    public:

    void Combinations(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int>&ds)
    {
        if(ind == arr.size())
        {
            if(target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind]<=target)
        {
            ds.push_back(arr[ind]);
            Combinations(ind,target-arr[ind],arr,ans,ds);
            ds.pop_back();

        }
        Combinations(ind+1,target,arr,ans,ds);
    }
    vector<vector<int>>findCombinations(vector<int>&arr, int target)
    {
        vector<vector<int>> ans;
        vector<int>ds;
        Combinations(0,target,arr,ans,ds);
        return ans;
    }
};

int main()
{
    Sol sol;
    int target;
    vector<vector<int>> ans;
    vector<int> arr = {1,2,6,4,5};
    cout<<"Enter target integer : "<<endl;
    cin>>target;

    ans = sol.findCombinations(arr,target);

    for(auto level: ans)
    {
        for(auto element: level)
        {
            cout<<element<<"\t";
        }
        cout<<endl;
    }

    return 0;
}