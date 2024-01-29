//reverse a number 

//algo : take a number
//set rev = 0;
//take each digit of that number and multiply it with 10 and add to rev


#include<iostream>
using namespace std;

int main()
{

    int num = 0, rev = 0, rem = 0;
    cout<<"Enter a number : "<<endl;
    cin>>num;

    while(num!=0)
    {
        rem = num % 10;
        rev = rev*10 + rem;
        num = num/10;
    }

    cout<<"Reversed number is : "<<rev<<endl;
    return 0;
}