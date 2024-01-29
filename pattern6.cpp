#include<iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, n = 0;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(i = n; i >0 ; i--)
    {
        for(j = i; j>0; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}