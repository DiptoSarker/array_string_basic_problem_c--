#include<iostream>
using namespace std;
int main(){
    string s1="horse";
    string s2="ros";
    int n1=s1.length();
    int n2=s2.length();
    int dp[n1+1][n2+1];

    for(int i=0; i<n1+1; i++){
        for(int j=0;j<n2+1; j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
        }
    }

    for(int i=1; i<n1+1; i++){
        for(int j=1; j<n2+1; j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

  int n= n1+n2;
  int l=2*dp[n1][n2];
  int ans=n-l;
  cout<<ans;
}