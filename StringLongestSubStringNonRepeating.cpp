#include<iostream>
#include<set>
using namespace std;

int main(){
    string s="pckwwab";
    int n=s.length();

    // We use set to check if the char is already taken or not
    // pkwwab
    // | |
    // e s 
    // st== P K W
    // when again P occur we will make the p erased and end come to the start....again iteration going on....

 set<char>st;
 int start = 0;
 int end = 0;
 int maxx=0;

 while(start<n){
    if(st.find(s[start])==st.end()){
        st.insert(s[start]);
        maxx=max(maxx,start-end+1);
        start++;
    }
    else{
        st.erase(s[end]);
        end++;
    }
 }
cout<<maxx;
}










   
