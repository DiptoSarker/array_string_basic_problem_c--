#include<iostream>
using namespace std;

int main(){
    int n = 1212;
    int m=n;
    int num = 0;
    while(n>0){
        int rem = n%10;
        num = rem+num*10;
        n/=10;
    }
    if(m==num) {cout<<"Palindrome";}
    else {cout<<"Not Pallindrome";}
}

