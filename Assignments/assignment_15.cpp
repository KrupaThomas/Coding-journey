//You are given an integer array height of length n . There are n vertical lines drawn such that the two 
//endpoints of the ith line are (i, 0) and (i, height[i]) Return the maximum amount of water a container can 
//store


#include<iostream>
#include<vector>

using namespace std;

int max_container(vector<int>&arr)
{
    int start = 0, end = arr.size() - 1;
    int area;
    int max_area = 0;
    while(start < end)
    {
        area = min(arr[start],arr[end])*(end - start);
        if(area > max_area)
        {
            max_area = area;
        }
        
        if(min(arr[start],arr[end]) == arr[start])
        {
            start++;
        }
        else
            end--;
    }
    return max_area;
}

int main()
{
    vector<int> arr = {1,8,6,2,5,4,8,3,7};

    cout<<"Max area of water that can be contained : "<<max_container(arr)<<endl;
    return 0;
}