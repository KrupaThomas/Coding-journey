//The sum of a two digit number ‘n’ and the number obtained by interchanging digits of n 
//is 88. The difference of the digits of ‘n’ is 4, with the tens place being larger than 
//the units place. Find the number ‘n’.

#include<iostream>
using namespace std;

int main()
{   int x = 0 , y = 0;
    x = (8 + 4)/2;
    y = 8 - x;
    cout<<"The digits are :"<<x<<" "<<y<<endl;
    return 0;
}