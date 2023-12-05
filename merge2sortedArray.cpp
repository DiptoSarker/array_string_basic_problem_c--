#include<iostream>
using namespace std;

int main(){
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8};
    int aa=0;
    int bb=0;

    int c = sizeof(a)/sizeof(a[0]);
    int d = sizeof(b)/sizeof(b[0]) ;
    int e=c+d;

    int arr[e];
    
    for(int i=0;i<e-1;i++){
       if(a[aa]<=b[bb]){
         arr[i]=a[aa];
         aa++;
       }
       else{
        arr[i]=b[bb];
        bb++;
       }

       if(aa==c){arr[i]=b[bb];}
       else if (bb==d) {arr[i]=a[aa];}
    }

    for(int i=0;i<e-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}