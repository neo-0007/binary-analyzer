#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            if (j == 0) break;
            j--;
        }
        if (arr[j] > key) arr[j] = key;
        else arr[j + 1] = key;
    }
}

int main() {
    vector<int> v = {9, 5, 1, 4, 3};
    insertionSort(v);
    for (int x : v) cout << x << " ";
}
