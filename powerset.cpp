//print all powersets of an array

#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> powerset(vector<int> nums)
{
    vector<vector<int>> ans = {{}};
    for(int num : nums)
    {
        int n = ans.size();
        for(int i = 0; i < n; i++)
        {
            vector<int> subset = ans[i];//to keep on appending to the existing list
            subset.push_back(num);
            ans.push_back(subset);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> ans;
    vector<int> nums = {1,2,3,4};

    ans = powerset(nums);

    for(auto subset : ans)
    {
        for(auto num : subset)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }

    return 0;
}