#include<iostream>
using namespace std;

int main(){
    string s="abbabb";
    int n = s.length();

    int dp[n][n];
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            dp[i][j]=0;
        }
    }
    int maxi=0;
    string ans;

    // here we have to see 3 cases
    // case 1: fataira vabe sob 1 hobe...
    // case 2: diff jokhon 1 hobe then jodi mile taile 2 na mille 0
    // case 3: diff >1 hole jodi mile taile dekha lagbe i+1,j-1 0 er theke boro kina
    // orthat i+1->j-1 pallindrome kina...jodi hoy then 2 plus hobe..

    for(int diff=0; diff<n; diff++){
        for(int i=0, j=i+diff; j<n; i++,j++){
            if(i==j){
                dp[i][j]=1;
            }
            else if(diff==1){
                dp[i][j]= (s[i]==s[j])?2:0;
            }
            else{
                if(s[i]==s[j] && dp[i+1][j-1]>0){
                    dp[i][j]= dp[i+1][j-1]+2;
                }
            }
            if(dp[i][j]>0){
                if(j-i+1>maxi){
                    maxi=j-i+1;
                    ans=s.substr(i,maxi);
                }
            }
        }
    }
    cout<<ans<<"  "<<maxi;
}