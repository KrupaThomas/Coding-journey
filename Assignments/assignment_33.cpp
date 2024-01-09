//Given an array nums of distinct integers, return all the possible permutations. You can return the answer in
// any order.


#include<iostream>
#include<vector>

using namespace std;

class Sol{
    public:
    void perms(vector<int>&nums, int freq[], vector<vector<int>>&ans,vector<int>&ds)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i = 0; i<nums.size() ; i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i] = 1;
                perms(nums,freq,ans,ds);
                freq[i] = 0;
                ds.pop_back();
            }
        }
        
    }
    vector<vector<int>>permutation(vector<int>&nums,int freq[])
    {
        vector<vector<int>>ans;
        vector<int>ds;
        perms(nums,freq,ans,ds);
        return ans;
    }
};

int main()
{
    Sol sol;

    vector<int>nums = {1,2,3};
    int freq[nums.size()] = {0};
    vector<vector<int>>ans;

    ans = sol.permutation(nums,freq);

    for(auto level : ans)
    {
        for(auto element : level)
        {
            cout<<element<<"\t";
        }
        cout<<endl;
    }


    return 0;
}
