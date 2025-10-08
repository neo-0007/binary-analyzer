#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int maxVal = arr[0];
    for (int x : arr) if (x > maxVal) maxVal = x;
    cout << "Max: " << maxVal << endl;
}
