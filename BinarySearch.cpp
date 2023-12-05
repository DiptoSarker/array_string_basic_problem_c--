#include<iostream>
using namespace std;

int binary(int arr1[], int start, int last, int t){
    while (start <= last) {
        int mid = start + (last - start) / 2;

        if (arr1[mid] == t) {
            return mid;
        } else if (arr1[mid] > t) {
            last = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr1[8] = {1, 3, 5, 7, 9, 13, 15, 17};
    int start = 0;
    int last = 7;
    int t = 13;
    
    int res = binary(arr1, start, last, t);

    if (res != -1) {
        cout << "Element found at index: " << res << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
