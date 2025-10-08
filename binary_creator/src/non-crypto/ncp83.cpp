#include <iostream>
using namespace std;

int main() {
    int arr[] = {9, 3, 1, 5, 4};
    int n = 5;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
            arr[j + 1] = arr[j--];
        arr[j + 1] = key;
    }
    for (int x : arr) cout << x << " ";
}
