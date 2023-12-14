#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    auto array_sum = [&arr]()->int
    {
        int sum = 0;
        for(int i = 0; i<5; i++)
        {
            
            sum += arr[i];
        }
        return sum;

    };

    cout<<array_sum()<<endl;

    return 0;
}