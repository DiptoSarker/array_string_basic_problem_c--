#include<iostream>
using namespace std;

int main(){
    int arr1[8]={3,7,10,5,26,13,12,17};

    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            if(arr1[i]>arr1[j]){
                int temp=arr1[j];
                arr1[j]=arr1[i];
                arr1[i]=temp;
            }
        }
    }
    for(int i=0;i<8;i++){
        cout<<arr1[i]<<" ";
    }
}