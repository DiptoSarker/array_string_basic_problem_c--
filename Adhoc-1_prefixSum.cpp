#include<iostream>
using namespace std;

int main(){
    int arr[]={2,4,1,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    

    for(int i=1; i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    
    int l,r;
    cin>>l>>r;

    cout<<arr[r]-arr[l-1];
}