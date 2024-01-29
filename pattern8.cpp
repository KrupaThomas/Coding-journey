/*
*****
 ***
  *

They are like : [0, 5, 0]
                [1, 3, 1]
                [2, 1, 2]
                
space star space
*/

#include<iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, k = 0, n = 0;
    cout<<"Enter number of rows : ";
    cin>>n;

   for(i = 0; i < n; i++)
    {
        //space star space
        for(j = 0; j<i; j++)
        {
            cout<<" ";
        }
        for(k = 0; k<2*(n-i)-1; k++)
        {
            cout<<"*";
        }
        for(j = 0; j<i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}