#include <iostream>
#include <unordered_map>
using namespace std;

string longestPalindromeSubstring(string s) {
    unordered_map<char, int> charCount;

    // Count the frequency of each character in the string
    for (char ch : s) {
        charCount[ch]++;
    }

    int maxLength = 0;
    char oddChar = '\0';

    // Iterate through the character counts
    for (const auto &pair : charCount) {
        int count = pair.second;

        // If the count is even, add it to the length of the palindrome
        // If the count is odd, subtract 1 and set oddChar to the current character
        if (count % 2 == 0) {
            maxLength += count;
        } else {
            maxLength += count - 1;
            oddChar = pair.first;
        }
    }

    // If an odd count was present, append the odd character to the palindrome
    string palindrome;
    if (oddChar != '\0') {
        palindrome += oddChar;
    }

    // Add characters to form the palindrome symmetrically
    for (const auto &pair : charCount) {
        char ch = pair.first;
        int count = pair.second;

        if (count >= 2) {
            palindrome = string(count / 2, ch) + palindrome + string(count / 2, ch);
        }
    }

    return palindrome;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string longestPalindrome = longestPalindromeSubstring(input);
    cout << "Longest palindromic substring: " << longestPalindrome << endl;

    return 0;
}
