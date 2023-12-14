// Example 1:

// Input: s = "leetcode", wordDict = ["leet","code"]
// Output: true
// Explanation: Return true because "leetcode" can be segmented as "leet code".
// Example 2:

// Input: s = "applepenapple", wordDict = ["apple","pen"]
// Output: true
// Explanation: Return true because "applepenapple" can be segmented as "apple pen apple".
// Note that you are allowed to reuse a dictionary word.
// Example 3:

// Input: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]
// Output: false

#include <iostream>
#include <set> 
using namespace std;

bool help(int i, string s, set<string> &wordDict) {
    if (i == s.size())
        return true;
    string temp;
    for (int j = i; j < s.size(); j++) {
        temp += s[j];
        if (wordDict.find(temp) != wordDict.end()) {
            if (help(j + 1, s, wordDict))
                return true;
        }
    }
    return false; // Change return type to bool
}

int main() {
    string s = "leetcode";
    string wordDict[] = {"leet", "code"};
    set<string> st(wordDict, wordDict + 2); // Initialize set
    bool ans = help(0, s, st); // Change type of ans to bool
    if (ans == false)
        cout << "false";
    else
        cout << "true";
    return 0;
}
