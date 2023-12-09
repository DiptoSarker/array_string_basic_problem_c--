#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,5,6,7,8,9,5,3,11,5,7,23};
    int n= sizeof(arr)/sizeof(arr[0]);
    int large=INT_MIN;
    int sec=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>large){
            sec=large;
            large=arr[i];
        }

        else if(arr[i]>sec){
            sec=arr[i];
        }
    }

    cout<<sec<<"  "<<large;
}