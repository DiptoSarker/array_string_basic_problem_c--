#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,-8,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi=0;
    

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum+=arr[k];
            } maxi=max(sum,maxi);
        }
    }

    cout<<maxi <<endl;

}


// less Complexity problem...........

// for(int i=0;i<n;i++){
//            sum+=arr[i];
//            if(sum<0){
//             sum=0;
//            }
//            maxi=max(sum,maxi);
//         }

//     cout<<maxi<<endl;