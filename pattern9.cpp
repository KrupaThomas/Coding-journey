#include<iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, k = 0, n = 0;
    cout<<"Enter number of rows : ";
    cin>>n;

   for(i = 1; i <= n; i++)
    {
        //space star space
        for(j = 1; j<=n-i+1; j++)
        {
            cout<<j<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}