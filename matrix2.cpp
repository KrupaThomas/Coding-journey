//multiplying two matrices
#include<iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, k = 0;
    int n,m,p,q;

    cout<<"Enter matrix indices : ";
    cin>>n>>m;

    int arr1[n][m] = {0};
    cout<<"Enter array 1 elements : "<<endl;

    for(i = 0; i <n; i++) 
    {
        for(j = 0; j<m; j++)
        {
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter matrix indices : ";
    cin>>p>>q;

    int arr2[p][q] = {0};
    cout<<"Enter array 2 elements : "<<endl;

    for(i = 0; i < p; i++)
    {
        for(j = 0; j< q; j++)
        {
            cin>>arr2[i][j];
        }
    }

    int arr3[n][q];
    if(m == p)
    {
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < q; j++)
            {
                arr3[i][j] = 0;
                for(k = 0; k < m; k++)
                {
                    arr3[i][j] += arr1[i][k]*arr2[k][j];
                }
            }
        }
    }

    for(i = 0; i <n; i++)
    {
        for(j = 0; j<q; j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}