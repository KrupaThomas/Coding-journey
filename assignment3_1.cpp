
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

    cout<<"The two strings are anagram or not (1/0) : "<<is_anagram(s,t)<<endl;

    return 0;
}

bool is_anagram(string s, string t)
{
    int s_size = s.length();
    int t_size = t.length();
    int s_count = 0, t_count = 0;

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

    if(s_size == t_size)
    {
        for (auto &pair : s_umap)
        {
        char ch = pair.first;
        s_count = pair.second;
        t_count = t_umap[ch];

        if(s_count != t_count)
            {
                return false;
            }

        }
        return true;
    }
    return false;
    
        
}