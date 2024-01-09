//You are given an integer array coins representing coins of different denominations and an integer amount 
//representing a total amount of money. Return the fewest number of coins that you need to make up that amount. 
//If that amount of money cannot be made up by any combination of the coins, return -1

#include<iostream>
#include<algorithm>
#include<array>
#include<map>

using namespace std;

map<int,int> fewest_coins(array<int,4> &array, int total)
{
    int i = 0,n = 4;
    map<int,int> deno;
    for(i = n-1 ; i >= 0 ; i--)
    {
        if(total <= 0)
            break;

        int count = total / array[i];
        if(count > 0)
        {
            deno[array[i]] = count ;
            total -= count * array[i];
            
        }
    }
        if(total > 0)
        deno[array[0]] = -1;
    
    return deno;
}

int main()
{
    array<int,4> coins = {1,2,5,10};
    int amount;
    cout<<"Enter target amount : ";
    cin>>amount;

    map<int,int> deno_no = fewest_coins(coins,amount);

    cout<<"The fewest number of coins to make up the amount is : "<<endl;

    for(const auto &pair : deno_no)
    {
        cout<<pair.first<<" : "<<pair.second<<endl;
    }


}


