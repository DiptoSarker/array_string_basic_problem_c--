#include<iostream>
using namespace std;

int main(){
    string s1="bbbab";
    // string s2=s1;
    // reverse(s1.begin(),s1.end())
   

   string s2="aceb";

    int n1=s1.length();
    int n2=s2.length();

    int dp[n1+1][n2+1];

    for(int i=0;i<n1+1; i++){
        for(int j=0; j<n2+1; j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
        }
    }

    // jodi match kore tahole i-1 j-1 er sathe 1 plus hobe
    // match na korle [i][j] er ager o uporer element er max nite hobe

    for(int i=1;i<n1+1; i++){
        for(int j=1;j<n2+1; j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }

            else{
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    cout<<dp[n1][n2];
}
