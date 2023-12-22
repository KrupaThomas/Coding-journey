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

//------------------------------------------------------------------------------
//max length of pallindrome that is possible after making from a word.
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int longestPalindromeLength(string s) {
//     unordered_map<char, int> charCount;

//     // Count the frequency of each character in the string
//     for (char ch : s) {
//         charCount[ch]++;
//     }

//     int maxLength = 0;
//     bool oddPresent = false;

//     // Iterate through the character counts
//     for (const auto &pair : charCount) {
//         int count = pair.second;

//         // If the count is even, add it to the length of the palindrome
//         // If the count is odd, subtract 1 and set oddPresent flag to true
//         if (count % 2 == 0) {
//             maxLength += count;
//         } else {
//             maxLength += count - 1;
//             oddPresent = true;
//         }
//     }

//     // If an odd count was present, add 1 to the length
//     if (oddPresent) {
//         maxLength++;
//     }

//     return maxLength;
// }

// int main() {
//     string input;
//     cout << "Enter a string: ";
//     cin >> input;

//     int length = longestPalindromeLength(input);
//     cout << "Length of longest palindrome that can be formed: " << length << endl;

//     return 0;
// }
