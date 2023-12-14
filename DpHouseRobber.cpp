// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.

#include<iostream>
using namespace std;
int main(){
    int nums[]={1,2,3,1};
    int n = sizeof(nums)/sizeof(nums[0]);
    int dp[n];
    dp[0]=nums[0];
    dp[1]=max(nums[0],nums[1]);

    for(int i=2;i<n;i++){
        dp[i]=max(nums[i]+dp[i-2], dp[i-1]);
    }
    cout<<dp[n-1];
}