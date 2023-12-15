// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.

// Example 2:
// Input: nums = [-2,0,-1]
// Output: 0
// Explanation: The result cannot be 2, because [-2,-1] is not a subarray.

#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,-2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int dp[n];
    dp[0]=arr[0];
    int ans=arr[0];
    for(int i=1;i<n;i++){
        dp[i]=arr[i]*dp[i-1];
        ans=max(ans,dp[i]);
    }

    cout<<ans;
}