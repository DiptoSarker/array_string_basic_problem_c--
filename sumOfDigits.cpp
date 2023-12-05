#include<iostream>
using namespace std;

int main(){
    int p = 12187;
    int temp=0;
    int sum=0;
    while(p>10){
        temp=p%10;
        sum+=temp;
        p=p/10;
    }
    sum+=p;
    cout<<sum;
}