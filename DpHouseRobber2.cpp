// Example 1:

// Input: nums = [2,3,2]
// Output: 3
// Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.
// Example 2:

// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.


#include<iostream>
using namespace std;

int main(){
    int nums[]= {1,2,3,1};
    int n = sizeof(nums)/sizeof(nums[0]);

    if (n == 1) {
            return nums[0];
        } else if (n == 2) {
            return max(nums[0], nums[1]);
        }

    int numsF[n-1];
    int numsL[n-1];

    for (int i=0;i<n-1;i++){
        numsF[i]=nums[i+1];
        numsL[i]=nums[i];
    }

    int dp1[n-1];
    dp1[0]=numsF[0];
    dp1[1]= max(numsF[0], numsF[1]);
    for(int i=2; i<n-1; i++){
        dp1[i]=max(numsF[i]+dp1[i-2], dp1[i-1]);
    }
    int ansF=dp1[n-2];


    int dp2[n-1];
    dp2[0]=numsL[0];
    dp2[1]= max(numsL[0], numsL[1]);
    for(int i=2; i<n-1; i++){
        dp2[i]=max(numsL[i]+dp2[i-2], dp2[i-1]);
    }
    int ansL=dp2[n-2];

    cout<<max(ansL,ansF);
}