#include<iostream>
#include<bitset>

using namespace std;

bitset<32> myAtoi(string num)
{
    bitset<32> result = 0;
    for(char bit: num)
    {
        if(bit == '0' || bit == '1')
        {
            result = result << 1;
            result |= (bit - '0');
        }
        else 
            return -1;
        
    }
    return result;

}

int main()
{
    string num;
    cout<<"Enter binary string : "<<endl;
    cin>>num;

    bitset<32> result = myAtoi(num);
    if(result != -1)
    {
        cout<<"The string after conversion is : "<< result<<endl;
    }
    else
        cout<<"Wrong input "<<endl;
    return 0;
}