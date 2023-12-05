#include<iostream>
#include <unordered_map>
using namespace std;

int main(){
    string s1="listen";
    string s2="silent";
    int aa=0;

    if(s1.length()!=s2.length()) {cout<<"false";}

    unordered_map<char,int> mp;

    for (char c:s1){
        mp[c]++;
    }

    for (char c:s2){
        mp[c]--;
    }

    for (auto pair:mp){
       if(pair.second!=0){
        aa=1;
       }
    }
    if(aa==1){cout<<"False";}
    else{cout<<"True";}
}