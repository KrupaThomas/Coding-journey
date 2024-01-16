#include<iostream>
#include<vector>

using namespace std;

int max_area(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    int area;
    int max_area = 0;

    while(start < end)
    {
        area = min(arr[start],arr[end])*(end-start);
        if(area>max_area) max_area = area;

        if(min(arr[start],arr[end]) == arr[start])
            start++;
        else
            end--;
    }
    return max_area;
}

int main()
{
    vector<int> array = {1,8,6,2,5,4,8,3,7};

    cout<<"Maximum area of water that can be comtained : "<<max_area(array)<<endl;
    return 0;
}