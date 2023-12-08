#include<iostream>
using namespace std;

int main(){
    string s="bbbbbssjnkmcnxhcjksl";
    int n=s.length();
   int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }

    for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
    }

    int maxi=0;
    for(int i=0; i<26; i++){
       maxi=max(maxi, freq[i]);
    }
    string ch="";
    for(int i=0;i<26;i++){
        if(freq[i]==maxi){
           ch='a'+i;
        }
    }

    cout<<maxi<<' '<<ch<<"      ";
}