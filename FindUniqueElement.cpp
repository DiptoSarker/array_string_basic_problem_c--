#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
    int arr[13] = {2,2,5,6,6,7,9,7,9,8,4,8,4};
    unordered_map<int,int> mp;

    for(int i=0;i<13; i++){
        mp[arr[i]]++;
    }

    for (auto pair:mp){
        if(pair.second==1){
            cout<<pair.first;
        }
    }
}