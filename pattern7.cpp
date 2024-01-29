/*
  *
 ***
*****

They are like : [4, 1, 4]
                [3, 3, 3]
                [2, 5, 2]
                [1, 7, 1]
                [0, 9, 0]
space star space
*/

#include<iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, k = 0, n = 0;
    cout<<"Enter number of rows : ";
    cin>>n;

   for(i = 0; i<n; i++)
    {
        //space star space
        for(j = 0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        for(k = 0; k<2*i+1; k++)
        {
            cout<<"*";
        }
        for(j = 0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}