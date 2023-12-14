// Unique Paths
// Input: m = 3, n = 7
// Output: 28
// Example 2:

// Input: m = 3, n = 2
// Output: 3
// Explanation: From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
// 1. Right -> Down -> Down
// 2. Down -> Down -> Right
// 3. Down -> Right -> Down

#include<iostream>
using namespace std;

int main(){
    int m=3;
    int n = 7;
    vector<vector<int> > dp(m, vector<int>(n,0));
        
        for(int j=0;j<n;j++){
               dp[0][j]=1;
        }
        for(int i=0; i<m; i++){
            dp[i][0]=1;
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i][j-1]+dp[i-1][j];
            }
        }

        cout<< dp[m-1][n-1];
    
}