#include <iostream>
using namespace std;


int main(){
    int arr[5] = {1,2,3,4,5};
    int k=2;
    int n=5;
    k=k%n;
    int res[n];
    
    for(int i=0; i<n; i++){
        int newIndex=(i+k)%n;
        res[i]=arr[newIndex];
    }

    for(int j=0; j<n; j++){
        cout<<res[j]<<" ";
    }
}








