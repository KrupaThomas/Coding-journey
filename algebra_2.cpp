//Find a number such that when 55 is subtracted from 4 times the number, the result is 
//5 more than twice the number. Solution : Let the required number be ‘n’.

#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    //equation is 4n - 55 = 5 + 2n;
    //2n = 60
    //cout<<"The number is : "<<(60/2)<<endl;
    //after rearranging the initial equation we have
    n = (55 + 5)/(4 - 2);
    cout<<"The number is : "<<n<<endl;
    
    return 0;
}