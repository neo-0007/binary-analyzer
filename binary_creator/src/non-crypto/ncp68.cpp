#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 8, 1, 9};
    int minVal = arr[0];
    for (int x : arr) if (x < minVal) minVal = x;
    cout << "Min: " << minVal << endl;
}
