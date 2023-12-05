#include<iostream>
#include<string>
using namespace std;


int main(){
    string s = "I am Dipto";
    string ans="";
    int len = s.length();
    int r;

    for(int i=len-1;i>=0;i--){
        if(s[i]==' '){
           r=len-i;
           len=i-1;
           ans.append(s.substr(i+1,r));
           ans.append(" ");
        }
    }
    ans.append(s.substr(0,len+1));
    cout<<ans;
}