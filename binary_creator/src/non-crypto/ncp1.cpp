#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    for (size_t i = 0; i < arr.size(); i++)
        for (size_t j = 0; j < arr.size() - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    for (int x : arr) cout << x << " ";
    return 0;
}
