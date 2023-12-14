// Example 1:

// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps
// Example 2:

// Input: n = 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step


#include<iostream>
using namespace std;

int main(){
    int n=4;
    if(n<=2) cout<<n;

    int a=1;
    int b=2;
    int i=3;
    while(i<=n){
        int c=a+b;
        a=b;
        b=c;
        i++;
    }
    cout<<b;
}