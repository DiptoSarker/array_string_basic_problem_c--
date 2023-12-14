// Example 1:

// Input: s = "12"
// Output: 2
// Explanation: "12" could be decoded as "AB" (1 2) or "L" (12).
// Example 2:

// Input: s = "226"
// Output: 3
// Explanation: "226" could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).
// Example 3:

// Input: s = "06"
// Output: 0
// Explanation: "06" cannot be mapped to "F" because of the leading zero ("6" is different from "06").

#include<iostream>
using namespace std;

int main(){
    string s="226";
    int n= s.size();

    if(n==0 || s[0]=='0') return 0;

    vector<int> dp(n+1);

    dp[0]=1;
    dp[1]=1;

    for(int i=2; i<=n; i++){
        if(s[i-1]>='1' && s[i-1]<='9'){
            dp[i]=dp[i-1];
        }
        if(s[i-2]=='1'){
            dp[i]+=dp[i-2];
        }

        else if(s[i-2]=='2' && (s[i-1]>='0' && s[i-1]<='6')){
            dp[i]+=dp[i-2];
        }
    }
    cout<<dp[n];
}

