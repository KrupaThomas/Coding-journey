#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int i = 0, j = 0, k = 0;
    int n;
    vector<int> nums = {1,-1,0,2,-2,3,-4,5};
    n = nums.size();
    vector<vector<int>> new_array;

    for(i = 0; i<n-2; i++)
    {
        for(j = i+1; j<n-1; j++)
        {
            for(k = j+1; k<n ; k++)
            {
                if (nums[i]+nums[j]+nums[k] == 0)
            
                    new_array.push_back({nums[i],nums[j],nums[k]});

            }
        }
    }

    for (const auto &s : new_array)
    {
        for (const auto element : s)
        {
            cout<<element<<"\t";

        }
        cout<<endl;
    }


 

    return 0;
}