/*
   *
  ***
 *****
********
********
 *****
  ***
   *
*/


#include<iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, n = 0;
    cout<<"Enter row num : ";
    cin>>n;

    for( i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++ )
        {
            cout<<" ";
        }

        for(j = 0; j < 2*i+1; j++)
        {
            cout<<"*";
        }
        for(j = 0; j < n - i - 1; j++ )
        {
            cout<<" ";
        }
        cout<<endl;
    }
    for( i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++ )
        {
            cout<<" ";
        }

        for(j = 0; j < 2*(n-i)-1; j++)
        {
            cout<<"*";
        }
        for(j = 0; j < i; j++ )
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}