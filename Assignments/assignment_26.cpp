//Given an integer array nums return an array answer such that answer[i] is equal to the product of all the 
//elements of nums except nums[i] You must write an algorithm that runs in O(n) time and without using the 
//division operation

#include<iostream>
#include<vector>

using namespace std;

#define size 5

vector<int> productexceptself(int arr[])
{
    vector<int>left(size,1);
    vector<int>right(size,1);

    for(int i = 1; i<size; i++)
    {
        left[i] = left[i-1]*arr[i-1];
    }


    for(int i = size - 2; i>=0; i--)
    {
        right[i] = right[i+1]*arr[i+1];
    }

    vector<int> ans(size,1);

    for(int i = 0; i < size; i++)
    {
        ans[i] = left[i]*right[i];
    }

    return ans;

}

int main()
{

    int nums[size] = {1,2,3,4,5};

    vector<int> ans = productexceptself(nums);

    cout<<"The answer array having product of all other elements in array except itself : "<<endl;

    for(auto i : ans)
    {
        cout<<i<<"\t";
    }
    


    return 0;
}