#include<iostream>
using namespace std;
int main(){
    int n=39;
    int i=2;
    int a=0;
    while(i<n/2){
        if(n%i==0){
            a++;
        }
        i++;
    }

    if (a==0) cout<<"Prime ";
    else cout<<"not prime ";
}