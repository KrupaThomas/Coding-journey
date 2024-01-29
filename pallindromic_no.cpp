//see if no is pallindromic or not

//algorithm:
//intuition -> pallindromic number is same if reversed as well while non pallindromic numbers arent.

//store number in temp variable, take a rev variable set it to 0
//take each digit from temp variable and it to the product of 10 and temp;
//keep on dividing temp till temp!=10
//compare num and rev(reversed no) to see if they are same

#include<iostream>
using namespace std;

bool pallindrome(int num);

int main()
{
    int num = 0, rev = 0, temp = 0, rem = 0;
    cout<<"Enter a number : "<<endl;
    cin>>num;

    cout<<"Number is pallindromic or not (1/0) : "<<pallindrome(num)<<endl;

    return 0;
}

bool pallindrome(int num)
{
    int temp = num, rev = 0 , rem = 0;

    while(temp!=0)
    {
        rem = temp % 10;
        rev = rev*10 + rem;
        temp = temp/10;
    }

    if(rev == num)
        return true;
    
    return false;

}

    