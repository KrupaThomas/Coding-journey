// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways
// can you climb to the top?

/*#include<iostream>
#include<cstring>

using namespace std;

int step(int n,int array[]);

int main()
{
    int n;
    cout<<"Enter the nth step : ";
    cin>>n;

    int array[n+1];
    memset(array,-1,sizeof(array));

    cout<<"The nth step can be reached in "<<step(n,array)<<" ways "<<endl;

    return 0;
}

int step(int val,int array[])
{
    if(val <= 1)
    {
        return 1;
    }
    if(array[val]!=-1)
        return array[val];

    
    array[val] = (step((val-1),array) + step((val-2),array));
    return array[val];

}*/



#include<iostream>

using namespace std;

int ways(int n);

int main()
{
    int n;
    cout<<"Enter the step number : ";
    cin>>n;

    cout<<"There are "<<ways(n)<<" ways to reach"<<endl;

    return 0;
}

int ways(int n)
{
    int i;
    int prev = 1;
    int prev2 = 1;
    int curr;
    for(i = 2; i<=n ; i++)
    {
        curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    return prev;
}
