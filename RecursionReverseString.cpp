#include<iostream>
using namespace std;


void reverse(string s){
    if(s.length()==0){
        return;
    }
    string sop = s.substr(1);
    reverse(sop);
    cout<<s[0];
}

int main(){
    string p = "eshan";
    reverse(p);
}

