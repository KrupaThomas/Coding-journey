//Given an integer array nums of unique elements, return all possible subsets (the power set). 
//The solution set must not contain duplicate subsets. Return the solution in any order

#include<iostream>
#include<vector>

using namespace std;


vector<vector<int>> subsets(vector<int>&arr)
{
    vector<vector<int>> ans = {{}};
    
    for(int num : arr)
    {
        int n = ans.size();
        
        for(int i = 0; i < n ; i++)
        {
            vector<int>subset = ans[i];
            subset.push_back(num);
            ans.push_back(subset);
        }
    }
   return ans;
}

int main()
{
    vector<int> nums = {1,2,3,4};

    vector<vector<int>> set = subsets(nums);

    for(const auto &row : set)
    {
        for(const auto &element : row)
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }

    



}