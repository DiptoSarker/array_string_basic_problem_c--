#include<iostream>
using namespace std;

int main(){
    int n = 17;
    int a = 0, b = 1;

    for(int i = 0; i <= n; i++){
        cout << a << " ";
        int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    return 0;
}
