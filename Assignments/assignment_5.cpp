
// Given two strings s and t , return true if t is an anagram of s , and
// false otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a

// different word or phrase, typically using all the original letters exactly once

#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

bool is_anagram(string s,string t);

int main()
{
    string s;
    string t;

    cout<<"Enter string 1 : ";
    cin>>s;

    cout<<"Enter string 2 : ";
    cin>>t;

    cout<<"The two strings are anagram or not (1/0) : "<<is_anagram(s,t);

    return 0;
}

bool is_anagram(string s, string t)
{
    int s_size = s.length();
    int t_size = t.length();
    int count = 0;

    unordered_map<char,int> s_umap;
    unordered_map<char,int> t_umap;

    for(char ch : s)
    {
        s_umap[ch]++;
    }

    for(char ch : t)
    {
        t_umap[ch]++;
    }
    unordered_map<char,int>::iterator i = s_umap.begin();
    unordered_map<char,int>::iterator j = t_umap.begin();

    if(s_size == t_size)
    {
        while(i!=s_umap.end() && j!= t_umap.end())
        {
            if(i->second == j->second)
            {
                count++;
                continue;
            }
            i++;
            j++;
        }

        if(count == s_size)
        {
            return true;
        }

    }
    return false;
}
