//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same 
//color are adjacent, with the colors in the order red, white, and blue. You must solve this problem without using 
//the library's sort function.

#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> sort(vector<int> &nums)
    {
        int i = 0;
        int j = nums.size() - 1;
        int k = j;

        while(i<=j)
        {
            int curr = nums[j];
            if(curr == 0)
            {
                swap(nums,i++,j);
            }
            else if(curr == 2)
            {
                swap(nums,j--,k--);
            }
            else
                j--;
        }
        return nums;
    }

    void swap(vector<int>&nums, int i, int j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

};

int main()
{
    vector<int> nums = {2,0,1,0,2,2};

    Solution sol;

    cout<<"Sorted colours is : "<<endl;
    vector<int> ans = sol.sort(nums);

    for(auto element: ans)
    {
        cout<<element<<" ";
    }
    cout<<endl;
    return 0;
}