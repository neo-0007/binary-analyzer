#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 7, 2, 9, 5};
    int maxVal = arr[0];
    for (int x : arr)
        if (x > maxVal) maxVal = x;
    cout << "Max = " << maxVal << endl;
}