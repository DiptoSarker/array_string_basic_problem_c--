#include <iostream>
using namespace std;

int main() {
    int arr[8] = {0, 2, 8, 1, 7, 0, 6, 0};
    int pos = 0;
    for (int i = 0; i < 8; i++) {
        if (arr[i] != 0) {
            arr[pos] = arr[i];
            pos++;
        }
    }

    for (int j = pos; j < 8; j++) {
        arr[j] = 0;
    }

    for (int k = 0; k < 8; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}
