//There is an integer array nums sorted in ascending order (with distinct values). Given the array nums after 
//the possible rotation and an integer target return the index of target if it is in nums , or -1 is not in nums 
//You must write an algorithm with O(log n) runtime complexity.

#include<iostream>
#include<vector>

using namespace std;

int search(vector<int> &nums, int n, int target)
{
    //we use binary search instead of linear seach here since the question says sorted + search
    int low = 0, high = n-1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(nums[mid] == target)
            return mid;

        //left sorted 
        if(nums[low]<=nums[mid])
        {   //see if target in left half
            if(nums[low]<=target && target<=nums[high])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
                
        }
        else
        {
            if(nums[mid]<=target && target <= nums[high])
            {
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        
    }
    return -1;

}

int main()
{
    vector<int> arr = {7,8,9,1,2,3,4,5,6};
    int target,n;

    n = arr.size();

    cout<<"Enter the target to be searched : "<<endl;
    cin>>target;

    cout<<"The element is located at index : "<<search(arr,n,target)<<endl;

    return 0;
}