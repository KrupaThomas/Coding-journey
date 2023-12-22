//trying to form the longest pallindrome that can be built from a string

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

class pallindrome
{
    string input;

    public:

    pallindrome()
    {
        cout<<"Enter word : ";
        cin>>input;
    }

    int length_pallindrome()
    {
        unordered_map<char,int>charCount;
        int max_length = 0;
        bool odd_present = false;


        for(char ch : input)
        {
            charCount[ch]++;
        }

        for (const auto &pair : charCount)
        {
            int count = pair.second;

            if(count%2 == 0)
            {
                max_length += count;
            }
            else
            {
                max_length += count-1;
                odd_present = true;
            }
        }

        if(odd_present)
        {
            max_length++;
        }

    return max_length;
    }

    ~pallindrome(){}
};

int main()
{
    pallindrome word;
    cout<<"Length of max pallindrome is : "<<word.length_pallindrome()<<endl;

}

