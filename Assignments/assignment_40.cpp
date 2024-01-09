//Given an m x n matrix return all elements of the matrix in spiral order

#include<iostream>
#include<vector>

using namespace std;

vector<int> spiral_print(vector<vector<int>> array)
{
    int n = array.size();
    int m = array[0].size();
    int top = 0, left = 0;
    int bottom = n-1 , right = m-1;
    vector<int> ans;

    while(top<=bottom && left<=right)
    {
        for(int i = left; i <= right; i++)
        {
            ans.push_back(array[top][i]);
        }
        top++;

        for(int i = top; i<= bottom; i++)
        {
            ans.push_back(array[i][right]);
        }
        right--;

        if(top<=bottom)
        {

            for(int i = right; i>=left; i--)
            {
                ans.push_back(array[bottom][i]);
            }
            bottom--;
        }

        if(left<=right)
        {
            
            for(int i = bottom ; i>=top; i--)
            {
                ans.push_back(array[i][left]);
            }
        left++;
        }
        
    }
    return ans;
}

int main()
{
    vector<vector<int>> array = {{1,2,3,4,5,6},
                                 {20,21,22,23,24,7},
                                 {19,32,33,34,25,8},
                                 {18,31,36,35,26,9},
                                 {17,30,29,28,27,10},
                                 {16,15,14,13,12,11}};


    vector<int> copy_arr = spiral_print(array);
    
    for(auto element : copy_arr)
    {
        cout<<element<<" ";
    }
    cout<<endl;
    
    return 0;
}