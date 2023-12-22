//task : 
// Suppose you have n versions [1, 2, ..., n] and you want to find out
// the first bad one, which causes all the following ones to be bad.
// You are given an API bool isBadVersion(version) which returns whether
// version is bad. Implement a function to find the first bad version


#include<iostream>
#include<array>

using namespace std;

int is_bad(int, int arr[],int );

int main()
{
    int n = 0, ver = 0,i = 0;
    cout<<"Enter the total no of versions : ";
    cin>>n;
    int array[n];
    for(i = 0;i < n; i++)
    {
        array[i] = i+1; 
    }

    cout<<"Enter the first bad version : ";
    cin>>ver;

    cout<<"The first bad version is at : "<<is_bad(ver,array,n)<<endl;

    // for(i = )

    return 0;
}

int is_bad(int val, int arr[],int n)
{
    int start = 0, end = n,left= 0, right = 0;
    int mid,i;

    for(i = 0; i <n ; i++)
    {
        int left = i, right = i;
        int mid = left + (right - left)/2;
        if(val==mid)
        {
            return mid;
        }
        else if(val>mid)
        {
            left = mid+1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;

}
