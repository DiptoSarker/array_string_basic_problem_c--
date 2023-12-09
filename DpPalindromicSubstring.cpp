#include<iostream>
using namespace std;
int main(){
    string s="aaa";
    int n=s.length();
    int dp[n][n];

    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            dp[i][j]=0;
        }
    }

    int count=0;

    for(int diff=0; diff<n; diff++){
        for(int i=0,j=i+diff;j<n;i++,j++){
            if(i==j){
                dp[i][j]=1;
            }
            else if(diff==1){
                if(s[i]==s[j]){
                    dp[i][j]=1;
                }
            }
            else if(s[i]==s[j]){
                dp[i][j]=dp[i+1][j-1];
            }
           if (dp[i][j]==1) count++;
        }
    }
    cout<<count;
}