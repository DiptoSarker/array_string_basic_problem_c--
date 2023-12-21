#include<iostream>
using namespace std;


int merge(int arr[], int left, int mid, int right){
    int n1= mid-left+1;
    int n2= right-mid;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i]=arr[left+i];
    }

    for(int i=0; i<n2; i++){
        b[i]=arr[mid+i+1];
    }

    int i=0; 
    int j=0;
    int k=left;

    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++; i++;
        }
        else{
            arr[k]=b[j];
            k++; j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++; i++;
    }

    while(j<n2){
        arr[k]=b[j];
        k++; j++;
    }

}


int mergeSort(int arr[], int left, int right){
    if(left<right){
        int mid=left+(right-left)/2;
        mergeSort(arr, left,mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left,mid, right);
    }
   
}

int main(){
    int arr[]={1,2,6,4,3,5,7,9,8};
    int n = sizeof(arr)/sizeof(arr[0])-1;
    mergeSort(arr,0,n);
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<"   ";
    }
}