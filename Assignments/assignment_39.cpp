//Implement the myAtoi(string s) function, which converts a string string to a 32-bit signed integer (similar to
//C/C++'s atoi function). Return the integer as the final result.

#include<iostream>
#include<bitset>

using namespace std;

int myAtoi(string s)
{
    int result = 0;
    for(char bit: s)
    if(bit == '0' || bit == '1')
    {
        result = result<<1;
        result |= (bit - '0');
    }
    else
        return -1;
    
    return result;

}

int main()
{
    string num = "11111111111100010010101010111";
    int result = myAtoi(num);
    if(result != -1)
    {
        string binRes = bitset<32>(result).to_string();
        cout<<"result in binary : "<<binRes<<endl;
    }
   

    return 0;

}
