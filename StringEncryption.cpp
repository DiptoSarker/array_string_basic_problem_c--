#include<iostream>
using namespace std;

string hexa(int n){
    string ans="";
    while(n!=0){
        char ch;
        int rem=n%16;
        if(rem<10){
            ch=rem+48;
        }
        else{
            ch=rem+87;
        }
        ans+=ch;
        n=n/16;
    }
  return ans;
}


string res(string s, int n){
 
    string ans="";

    for(int i=0; i<n; i++){
     int count=0;
     char ch=s[i];
     string hax;
     while(s[i]==ch && i<n){
        count++;
        i++;
      }
      i--;
      
      hax=hexa(count);
      ans+=ch;
      ans+=hax;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    string s="abccccccccccc";
    int n = s.length();
    cout<<res(s,n);
}