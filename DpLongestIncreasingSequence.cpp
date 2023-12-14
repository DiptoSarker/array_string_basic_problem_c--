#include<iostream>
using namespace std;

int main(){
    int arr[]={3,4,3,2,5,6,7,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int dp[n];
    for(int i=0; i<n; i++){
        dp[i]=0;
    }
    
    int count = 0;
    for(int i=1; i<n; i++){
       for(int j=0; j<i; j++){
           if(arr[i]>arr[j]){
            if(dp[j]+1>dp[i])
              {dp[i]=dp[j]+1;}
              count = max(count, dp[i]);
           }
           
       }
    }
    cout<<count+1;
}