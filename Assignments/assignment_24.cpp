//Implement the Trie class: Trie() Initializes the trie object. 
//void insert(String word) Inserts the string word into the trie. boolean search(String word) Returns true 
//if the string word is in the trie boolean. startsWith(String prefix) Returns true if there is a previously 
//inserted string word that has the prefix.

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

class Trie
{
    private: 
    vector<string> words;

    public:
    Trie(){};

    void insert(string word)
    {
        words.push_back(word);
    }

    bool search(string word)
    {
        auto it = find(words.begin(),words.end(),word);
        if(it != words.end())
        {
            return true;
        }
    return false;   
    }

    bool startsWith(string prefix)
    {
        for(const string &str : words)
        {
           istringstream iss(str);
           string word;
           int count = 0;
           while(iss>>word)
           {
            count++;
            if(!word.compare(prefix) && count == 1)
            {
                return true;
            }
           }
        }
        return false;
    }
   
};

int main()
{
    Trie obj;
    obj.insert("Hello world");
    obj.insert("Rajput");
    obj.insert("Hello people");

    cout<<"Rajput is found/not found (1/0) : "<<obj.search("Raj")<<endl;
    cout<<"Prefix found/not found (1/0) : "<<obj.startsWith("Hello")<<endl;
}


