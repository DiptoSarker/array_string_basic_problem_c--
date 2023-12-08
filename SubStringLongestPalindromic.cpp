#include<iostream>
using namespace std;

int main(){
    string s="abbabb";
    int n = s.length();

    vector<vector<int> >dp(n,vector<int>(n,0));
    int maxi=0;
    string ans;

    for(int diff=0; diff<n; diff++){
        for(int i=0, j=i+diff; j<n; i++,j++){
            if(i==j){
                dp[i][j]=1;
            }
            else if (diff==1){
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