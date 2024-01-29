/*Print
*
* *
* * *
* * * *
* * * * *
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 0, i = 0, j = 0;
    cout<<"Enter the row size : ";
    cin>>n;

    for(i = 0; i <n; i++)
    {
        for(j = 0; j<=i; j++)
        {
            cout<<"* ";

        }
        cout<<endl;
    }
    return 0;
}