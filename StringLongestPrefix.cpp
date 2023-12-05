#include<iostream>
using namespace std;

int finderr(string arr[], int n){
    if(n==0)return 0;
    if(n==1)return arr[0].size();

    sort(arr,arr+n);
    int len = min(arr[0].size(),arr[n-1].size());
    string l=arr[0];
    string r=arr[n-1];

    int i=0;

    while(i<len && l[i]==r[i]){
        i++;
    }
    return i;
}


int main(){
    string arr[] = {"dipto","dipali","dipika"};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = finderr(arr,n); 
    cout<<res;
}