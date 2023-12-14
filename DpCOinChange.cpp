// Example 1:

// Input: coins = [1,2,5], amount = 11
// Output: 3
// Explanation: 11 = 5 + 5 + 1
// Example 2:

// Input: coins = [2], amount = 3
// Output: -1
// Example 3:

// Input: coins = [1], amount = 0
// Output: 0


#include<iostream>
using namespace std;

int main(){
   int coins[]={2};
   int amount =3 ;

   if(amount<1){
    return 0;
   }
   vector<int> dp (amount+1, INT_MAX);

   dp[0]=0;

   for(int i=0; i<=amount; i++){
    for (int coin:coins){
        if(i>=coin && dp[i-1]!=INT_MAX){
            dp[i]=min(dp[i], dp[i-coin]+1);
        }
    }
   
   }
    if(dp[amount]==INT_MAX) cout<<" -1";
    else cout<<dp[amount];
}