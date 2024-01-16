//binary string question

#include<iostream>
#include<string>
#include<bitset>

using namespace std;

bitset<32> bin_sum(string bin_str1, string bin_str2)
{
    // bitset<32> bits1(bin_str1);
    // bitset<32> bits2(bin_str2);
    // bitset<32> sum = bits1 + bits2;

    int bits1,bits2;
    bits1 = stoi(bin_str1,0,2);
    bits2 = stoi(bin_str2,0,2);

    int sum = bits1 + bits2;

    return sum;

}

int main()
{

    string bin_str1 ;//= "1010101010";
    string bin_str2 ;//= "00000010";

    cout<<"Enter first binary string : ";
    cin>>bin_str1;

    cout<<"Enter second binary string : ";
    cin>>bin_str2;

    cout<<"the concatenated binary string is : "<<bin_sum(bin_str1,bin_str2)<<endl;
    return 0;
}
