//7. Given an array of integers nums which is sorted in ascending order, and
// an integer target , write a function to search target in nums . If target
// exists, then return its index. Otherwise, return -1 .
// You must write an algorithm with 0(log n) runtime complexity

//O(logn) - Binary search algo
//O(n) - linear search algo

#include<iostream>
#include<array>
#include<algorithm>

using namespace std;


int search(std::array<int,6>arr,int v);

int main()
{   
    int value;

    std::array<int,6>arr1 = {1,2,3,4,5,6};
    cout<<"Enter value to be searched : ";
    cin>>value;

    cout<<"Value is found at position : "<<search(arr1,value)<<endl;

    return 0;
}

int search(std::array<int,6>arr,int v)
{
    //binary search
    int start = 0, end = arr.size()-1;
    while(end>=start)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == v)
        {
            return mid;
        }
        else if(v > arr[mid])
        {
            start = mid + 1;
            continue;
        }
        else
        {
            end = mid - 1;
            continue;
        }
    }
    return -1;
}
