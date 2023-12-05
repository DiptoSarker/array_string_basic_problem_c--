#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,7};
    int odd=0;
    int even =0;

    for(int i=0;i<11; i+=2){
        even+=arr[i];
    }

    for(int j=1;j<11; j+=2){
        odd+=arr[j];
    }

    int ans = abs(even-odd);

    cout<<ans;
}