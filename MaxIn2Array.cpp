#include <iostream>
using namespace std;

int main(){
    int arr1[5]={3,7,10,5,26};
    int arr2[5]={6,8,2,4,5};

    int maxi=0;

    for(int i=0; i<5; i++){
        maxi=max(maxi,arr1[i]);
    }
     for(int j=0; j<5; j++){
        maxi=max(maxi,arr2[j]);
    }

    cout<<maxi;
}