#include<iostream>
#include<set>
using namespace std;

int main(){
    string s="ppcckccawab";
    int n=s.length();
    
    set<int> st;
    int start=0;
    int end=0;
    int count=0;

    while(end<n){
       if(st.find(s[end])==st.end()){
         st.insert(s[end]);
         count=max(count, end-start+1);
         end++;
       }
       else{
        st.erase(s[start]);
        start++;
       }
    }
    cout<<count;
}