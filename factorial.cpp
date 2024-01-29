//factorial of a number n
#include<iostream>
using namespace std;

int fibo(int );

int main()
{
    int num;
    cout<<"Enter number : "<<endl;
    cin>>num;

    cout<<"Fibonacci of "<<num<<" is : "<<fibo(num)<<endl;
    return 0;
}

int fibo(int x)
{
    if(x == 1)
        return 1;

    return x * fibo(x-1);
}
