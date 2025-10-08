#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    cout << binarySearch(arr, 5, 7);
}
