// words = ["leet","code"], x = "e"

#include<iostream>
using namespace std;

int main(){
    string words[] = {"leet","code"};
    char ch = 'e';
    int n = sizeof(words)/sizeof(words[0]);

    vector<int>ans;
    

    for(int i=0;i<n;i++){
        string word = words[i];
        int a=0;
        for(int j=0;j<word.length();j++){
             if(word[j]==ch){
                a++;
             }
             
        }
        if(a>0){
                ans.push_back(i);
             }
    }
    for (int index : ans) {
        cout << index << " ";
    }
   
}