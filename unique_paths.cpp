//to find number of unique paths from (0,0) to (m,n) of a mxn matrix

#include<iostream>

using namespace std;

int paths(int i , int j)
{
    if(i == 0 && j == 0)
        return 1;
    if(i<0 || j<0)
        return 0;
    int left = paths(i-1,j);
    int up = paths(i,j-1);
    return (left+up);
}

int main()
{
    int m, n;
    cout<<"Enter values of m and n : "<<endl;
    cin>>m>>n;

    cout<<"Number of unique paths : "<<paths(m-1,n-1)<<endl;//as mxn is grid dimensions the last index is m-1 , n-1
    return 0;
}