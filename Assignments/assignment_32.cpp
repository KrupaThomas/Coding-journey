//Given an array of distinct integers candidates and a target integer candidates target return a list of all 
//unique combinations of candidates where the chosen numbers sum to target You may return the combinations in 
//any order

#include<iostream>
#include<vector>


using namespace std;

class Sol
{
    public:

    void Combinations(int index, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        if(index == arr.size())
        {
            if(target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }

        if(arr[index]<=target)
        {
            ds.push_back(arr[index]);
            Combinations(index,target-arr[index],arr,ans,ds);
            ds.pop_back();
        }

        Combinations(index+1,target,arr,ans,ds);


    }

    vector<vector<int>> findcombinations(vector<int> &arr, int target)
    {
        vector<vector<int>>ans;
        vector<int>ds;
        Combinations(0,target,arr,ans,ds);
        return ans;
    }

};

int main()
{
    Sol solution;
    vector<int> nums = {1,6,2,8,22,56,32};
    int target ;
    cout<<"Enter target integer : "<<endl;
    cin>>target;

    vector<vector<int>> ans = solution.findcombinations(nums,target);

    for( auto i : ans)
    {
        for (auto element : i)
        {
            cout<<element<<"\t";
        }
        cout<<endl;
    }



    return 0;
}


