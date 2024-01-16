//Given a list of accounts where each element accounts[i] is a list of strings where the first element accounts[i][0] is a
//name, and the rest of the elements are emails representing emails of the account. After merging the accounts, 
//return the accounts in the following format: the first element of each account is the name, and the rest of the
//elements are emails in sorted order. The accounts themselves can be returned in any order

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<string>> accounts = {{"John","johnsmith@mail.com","john_newyork@mail.com"},{"John","johnsmith@mail.com","john00@mail.com"},{"Mary","mary@mail.com"},{"John","johnnybravo@mail.com"}};
    map<string, vector<string>> map_acc;
    
    int n = accounts.size();
    

    for (int i = 0; i < n; i++) {
        int m = accounts[i].size();
        for (int j = 1; j < m; j++) {
            map_acc[accounts[i][0]].push_back(accounts[i][j]);
        }
    }

    for (auto &it : map_acc) {
        sort(it.second.begin(), it.second.end());
        it.second.erase(unique(it.second.begin(), it.second.end()), it.second.end());
    }

    for (const auto &it : map_acc) {
        cout << it.first << ": ";
        for (const auto &element : it.second) {
            cout << element << " "; 
        }
        cout << endl;
    }

    return 0;
}
