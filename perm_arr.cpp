#include<iostream>
#include<vector>

using namespace std;

class Sol{
    public:
    void perm(vector<int> &nums, vector<vector<int>>&ans, vector<int>&ds,int freq[])
    {
        if(ds.size() == nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i = 0; i<nums.size(); i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i] = 1;
                perm(nums,ans,ds,freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
        


    }

    vector<vector<int>> permutation(vector<int> &nums,int freq[])
    {
        vector<vector<int>>ans;
        vector<int>ds;
        perm(nums,ans,ds,freq);
        return ans;

    }

};

int main()
{
    Sol sol;
    vector<int> nums = {1,7,2};
    int freq[nums.size()] = {0};
    vector<vector<int>> ans;
    

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