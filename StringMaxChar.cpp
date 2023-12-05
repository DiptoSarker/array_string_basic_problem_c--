#include<iostream>
using namespace std;

int main(){
    string s="bbbbbssjnkmcnxhcjksl";
    int n=s.length();
    int freq[26];
    for(int i=0; i<26; i++){
        freq[i]=0;
    }

    for(int i=0; i<n; i++){
        freq[s[i]-'a']++;
    }

    int maxf=0;
    string ans="";

    for(int i=0; i<26;i++){
        if(freq[i]>maxf){
            maxf=freq[i];
            ans='a'+i;
        }
    }

    cout<<ans<<"  "<<maxf;
}