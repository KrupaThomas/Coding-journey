//There is a robot on an m x n grid. The robot is initially located at the top-left corner. The robot tries to 
//move to the bottom-right corner The robot can only move either down or right at any point in time. Given the 
//two integers m and n , return the number of possible unique paths that the robot can take to reach the 
//bottom-right corner

#include<iostream>

using namespace std;

int f(int i, int j)
{
    if(i == 0 && j == 0)
        return 1;
    if(i<0 || j<0)
        return 0;
    int up = f(i-1,j);
    int left = f(i,j-1);
    return up + left;
}

int paths(int m,int n)
{
    return f(m-1,n-1);
}

int main()
{
    int m, n;
    cout<<"Enter the values of m and n : "<<endl;
    cin>>m>>n;

    cout<<"Number of paths : "<<paths(m,n)<<endl;


    return 0;
}