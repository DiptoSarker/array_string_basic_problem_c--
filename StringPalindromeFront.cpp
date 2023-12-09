#include<iostream>
using namespace std;

int main(){
    string s="aacecaaa";
    int n=s.length();

    int i=0;
    int j=n-1;
    
    int ans=0;

    //abaabac

    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            ans++;
            j--;
        }
    }
    cout<<ans;
}