#include<iostream>
#include<set>
#include<string>

using namespace std;

int longest_substring(string s)
{
    int max_length = 0, i = 0 , j = 0;
    int n = s.length();
    set<char> set;

    while(j<n)
    {
        if(set.find(s[j])==set.end())
        {
            set.insert(s[j++]);
            max_length = max(max_length, j-i);

        }
        else
            set.erase(s[i++]);

    }
    return max_length;

}

int main()
{
    string s;
    int length;
    cout<<"Enter string : "<<endl;
    cin>>s;

    length = longest_substring(s);
    cout<<"Longest substring is : "<<length<<endl;

    return 0;
}