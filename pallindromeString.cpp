#include<iostream>
using namespace std;

int main(){
    string s = "diptootpidd";
    int n=s.length();
    int count = 0;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            count+=abs(s[i] - s[n - i - 1]);
        }
    }
    if(count==0){
        cout<<"Its pellindrome...!";
    }
    else{
        cout<<count;
    }
}
