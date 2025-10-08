#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, arr + 5);
    for (int x : arr) cout << x << " ";
}
