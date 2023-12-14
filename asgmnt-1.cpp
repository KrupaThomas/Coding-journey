//find longest pallindromic substring

#include<iostream>
#include<string>
using namespace std;

class word
{
    private : 
    string name;

    public :
    word()
    {
        cout<<"Enter word : "<<endl;
        cin>>name;
    }

    
    int length_pallindrome() {
    int len = name.length();
    int max_length = 1;
    int st = 0, end = 0;

    // For odd-length palindromes
    for (int i = 0; i < len; i++) {
        int l = i, r = i;
        while (l >= 0 && r < len && name[l] == name[r]) {
            if (r - l + 1 > max_length) {
                st = l;
                end = r;
                max_length = r - l + 1;
            }
            l--;
            r++;
        }
    }

    // For even-length palindromes
    for (int i = 0; i < len - 1; i++) {
        int l = i, r = i + 1;
        while (l >= 0 && r < len && name[l] == name[r]) {
            if (r - l + 1 > max_length) {
                st = l;
                end = r;
                max_length = r - l + 1;
            }
            l--;
            r++;
        }
    }

    string longest_palin = name.substr(st, max_length);
    
    return longest_palin.length();
}


    ~word(){}
};

int main()
{
    word new_word;
    cout << "Length of max pallindrome : " << new_word.length_pallindrome();


    return 0;
}