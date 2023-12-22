
// Given an array of integers, print integers in alternate fashion starting from 1st position.

// Input:  1, 2, 3, 4, 5, 6, 7, 8, 9, 10
// Output: 2 4 6 8 10

#include<iostream>
#include<array>
using namespace std;


int main()
{
    std::array<int,5> arr = {1,7,8,9,10};
    for(int i = 0; i < arr.size(); i++)
    {
        if(i%2 == 0)
        {
            cout<<arr.at(i)<<endl;
        }
    }

    return 0;
}
