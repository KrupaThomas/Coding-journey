#include<iostream>
#include<vector>

using namespace std;

int search(vector<int> &arr, int n, int k)
{
    int low = 0, high = n -1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == k)
            return mid;
        if(arr[low]<=arr[mid])
        {
            if(arr[low]<=k && k<=arr[mid])
            {
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        else
        {
            if(arr[mid]<=k && k<= arr[high])
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
    int target, n;
    n = arr.size();
    cout<<"Enter target : "<<endl;
    cin>>target;

    cout<<"target located at index : "<<search(arr,n,target)<<endl;
    return 0;
}